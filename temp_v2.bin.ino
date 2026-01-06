#include <WiFi.h>

#define CURRENT_VERSION 2   // NEW VERSION

void setup() {
  Serial.begin(115200);
  Serial.println("TEMP CODE V2 (UPDATED OVER WIFI)");
  Serial.print("Running version: ");
  Serial.println(CURRENT_VERSION);
}

void loop() {
  float temp = 30.0;
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println(" C");
  delay(2000);
}
