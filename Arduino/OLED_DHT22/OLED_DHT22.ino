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

void setup() {
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
    //Serial.print("Read DHT22 failed, err="); Serial.print(SimpleDHTErrCode(err));
    //Serial.print(","); Serial.println(SimpleDHTErrDuration(err)); 
    delay(500);
    return;
  }

  temperature = round(temperature * 10.0) / 10.0; 
  humidity = round(humidity * 10.0) / 10.0;

  // 輸出
  Debug(temperature, humidity);
  OLED_Output(temperature, humidity);
  delay(1000); //暫停1秒
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
    u8g2.setCursor(0, 30); u8g2.print("溫度"); u8g2.setCursor(29, 30); u8g2.print("|"); u8g2.setCursor(37, 30); u8g2.print(temperature, 1);u8g2.setCursor(80, 30); u8g2.print("± 3"); 
    u8g2.setCursor(0, 50); u8g2.print("濕度"); u8g2.setCursor(29, 53); u8g2.print("|"); u8g2.setCursor(37, 50); u8g2.print(humidity, 1); u8g2.setCursor(80, 50); u8g2.print("± 0.5"); 
    }while (u8g2.nextPage());
}