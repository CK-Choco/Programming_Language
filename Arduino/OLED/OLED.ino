#include <Arduino.h>    //基礎
#include <U8g2lib.h>    //OLED
#include <SimpleDHT.h>  //溫度濕度

// OLED
#ifdef U8X8_HAVE_HW_I2C
#include <Wire.h>
#endif
U8G2_SH1106_128X64_NONAME_1_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);

// 濕溫度
int pinDHT22 = 13;  //濕溫度連接 ESP32 pin 13
SimpleDHT22 dht22(pinDHT22);

// 時間
unsigned long startTime = millis();

void setup() {
  u8g2.begin(); u8g2.enableUTF8Print();  //啟用UTF8文字的功能
  Serial.begin(115200);
  Serial.println("初始化");
}

void loop() {
  // 啟動秒數
  int secs = (millis() - startTime) / 1000;

  // 濕溫度
  float temperature = 0, humidity = 0; //DHT22
  int err = SimpleDHTErrSuccess;
  if ((err = dht22.read2(&temperature, &humidity, NULL)) != SimpleDHTErrSuccess) {
    //Serial.print("Read DHT22 failed, err="); Serial.print(SimpleDHTErrCode(err));
    //Serial.print(","); Serial.println(SimpleDHTErrDuration(err)); 
    delay(500);
    return;
  }

  // 輸出
  OLEDOutput(temperature, humidity, secs);
  delay(750); //暫停0.75秒
}

void OLEDOutput(float temperature, float humidity, int secs){
  u8g2.setFont(u8g2_font_unifont_t_chinese1); // 設置字型
  u8g2.firstPage();
  do {
    u8g2.setCursor(0, 14); u8g2.print("溫度"); u8g2.setCursor(30, 14); u8g2.print("|"); u8g2.setCursor(40, 14); u8g2.print(temperature);
    u8g2.setCursor(0, 32); u8g2.print("濕度"); u8g2.setCursor(30, 32); u8g2.print("|"); u8g2.setCursor(40, 32); u8g2.print(humidity); 
    u8g2.setCursor(0, 50); u8g2.print("時間"); u8g2.setCursor(30, 50); u8g2.print("|"); u8g2.setCursor(40, 50); u8g2.print(secs);
    }while (u8g2.nextPage());
  }
