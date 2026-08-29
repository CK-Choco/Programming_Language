#include <Wire.h>
#include <U8g2lib.h>       // 引入 U8g2 函式庫
#include "Adafruit_SHT31.h"
#include "WiFi.h"

// 1. 初始化 U8g2 (使用 HW I2C，適用於 SSD1306/SH1106 128x64 螢幕)
U8G2_SH1106_128X64_NONAME_1_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);

// 2. 初始化 SHT31 傳感器
Adafruit_SHT31 sht31 = Adafruit_SHT31();

// 定義 ESP32-C3 SuperMini 的預設 I2C 引腳
#define I2C_SDA 10
#define I2C_SCL 9

void setup() {
  Serial.begin(115200);

  // 強制關閉無線功能（省電、防發熱）
  WiFi.mode(WIFI_OFF);
  Serial.println("Wi-Fi 與藍牙已關閉");

  // 初始化 ESP32-C3 的 I2C 引腳
  Wire.begin(I2C_SDA, I2C_SCL);

  // 初始化 U8g2 螢幕
  u8g2.begin();
  u8g2.enableUTF8Print(); // 開啟 UTF8 支援才能正常繪製中文字

  // 初始化 SHT31 傳感器
  if (!sht31.begin(0x44)) {   
    Serial.println("找不到 SHT31 傳感器！");
    while (1) delay(10);
  }
  Serial.println("SHT31 傳感器初始化成功");
}

void loop() {
  // 讀取溫濕度資料
  float temperature = sht31.readTemperature();
  float humidity = sht31.readHumidity();

  // 檢查溫濕度數值是否有效
  if (isnan(temperature)) temperature = 0.0;
  if (isnan(humidity)) humidity = 0.0;

  // 四捨五入至小數點後 1 位
  temperature = round(temperature * 10.0) / 10.0;
  humidity = round(humidity * 10.0) / 10.0;

  // 計算熱指數：當前溫度 + 相對濕度 × 0.1
  float heatIndex = temperature + (humidity * 0.1);
  heatIndex = round(heatIndex * 10.0) / 10.0;

  // 根據熱指數判斷狀態字串（綠 / 黃 / 紅）
  String statusStr = "";
  if (heatIndex < 32.0) {
    statusStr = "綠";
  } else if (heatIndex < 41.0) {
    statusStr = "黃";
  } else {
    statusStr = "紅";
  }

  // 使用 U8g2 的 Page Buffer (firstPage/nextPage) 繪製靜態畫面
  u8g2.firstPage();
  do {
    // 設置中文字型
    u8g2.setFont(u8g2_font_unifont_t_chinese1); 

    // 1. 第一行：固定顯示「熱指數 XX.X 綠/黃/紅」
    u8g2.setCursor(5, 20); u8g2.print(statusStr);
    u8g2.setCursor(18, 20); u8g2.print("|");
    u8g2.setCursor(26, 20); u8g2.print("熱指數");
    
    // 2. 第二行：溫度欄位
    u8g2.setCursor(5, 40); u8g2.print("溫度"); 
    u8g2.setCursor(34, 40); u8g2.print("|"); 
    u8g2.setCursor(42, 40); u8g2.print(temperature, 1); 
    u8g2.setCursor(85, 40); u8g2.print("± 0.5"); 
    
    // 3. 第三行：濕度欄位
    u8g2.setCursor(5, 60); u8g2.print("濕度"); 
    u8g2.setCursor(34, 60); u8g2.print("|"); 
    u8g2.setCursor(42, 60); u8g2.print(humidity, 1); 
    u8g2.setCursor(85, 60); u8g2.print("± 3"); 

  } while (u8g2.nextPage());

  // 每 1000 毫秒（1 秒）讀取並更新一次畫面
  delay(1000); 
}
