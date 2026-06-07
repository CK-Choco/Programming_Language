#include <Arduino.h>
#include <U8g2lib.h>
#include <SimpleDHT.h>

// OLED
#ifdef U8X8_HAVE_HW_SPI
#include <SPI.h>
#endif
#ifdef U8X8_HAVE_HW_I2C
#include <Wire.h>
#endif
U8G2_SH1106_128X64_NONAME_1_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);

// 濕溫度
int pinDHT22 = 13;  //濕溫度連接 ESP32 pin 13
SimpleDHT22 dht22(pinDHT22);

// 跑馬燈全域變數
int marqueeX = 128; // 一開始從螢幕最右邊（128px）開始出現

void setup() {
  Wire.begin(22, 21);
  u8g2.begin();
  u8g2.enableUTF8Print();  //啟用UTF8文字的功能
  Serial.begin(115200);
  Serial.println("初始化");
}

void loop() {
  // 濕溫度
  float temperature = 0, humidity = 0; //DHT22
  int err = SimpleDHTErrSuccess;
  if ((err = dht22.read2(&temperature, &humidity, NULL)) != SimpleDHTErrSuccess) {
    delay(100); // 失敗時稍微等一下，不要塞車
    return;
  }

  temperature = round(temperature * 10.0) / 10.0; 
  humidity = round(humidity * 10.0) / 10.0;

  // 輸出
  Debug(temperature, humidity);

  // 為了讓跑馬燈動得比較順暢，我們可以用一個小迴圈讓它更新畫面幾次
  // 這樣就不會因為 DHT22 每秒只讀一次而導致跑馬燈每秒才動一下
  for (int i = 0; i < 20; i++) {
    OLED_Output(temperature, humidity);
    
    // 每次更新畫面，X 座標往左移動 2 個像素
    marqueeX -= 2; 
    
    // 如果文字完全移出左邊螢幕（"Power On" 大約 64 像素寬），就重置回最右邊
    if (marqueeX < -64) { 
      marqueeX = 128; 
    }
    
    delay(50); // 調整這個 delay 可以改變跑馬燈的速度（數字越小越快）
  }
}

void Debug(float temperature, float humidity){
  Serial.println("=================================");
  Serial.print("溫度:"); Serial.print((float)temperature);
  Serial.print("濕度:"); Serial.println((float)humidity);
}

void OLED_Output(float temperature, float humidity){
  u8g2.setFont(u8g2_font_unifont_t_chinese1); // 設置字型
  u8g2.firstPage();
  do {
    // 【修改處】將原本固定的 0 改成動態的 marqueeX
    u8g2.setCursor(marqueeX, 20); u8g2.print("Power On");
    
    // 底下的溫濕度保持固定不動
    u8g2.setCursor(5, 40); u8g2.print("溫度"); u8g2.setCursor(34, 40); u8g2.print("|"); u8g2.setCursor(42, 40); u8g2.print(temperature, 1);u8g2.setCursor(85, 40); u8g2.print("± 0.5"); 
    u8g2.setCursor(5, 60); u8g2.print("濕度"); u8g2.setCursor(34, 60); u8g2.print("|"); u8g2.setCursor(42, 60); u8g2.print(humidity, 1); u8g2.setCursor(85, 60); u8g2.print("± 3"); 
  } while (u8g2.nextPage());
}
