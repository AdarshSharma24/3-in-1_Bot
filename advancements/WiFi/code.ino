#include <WiFi.h>  // Use <ESP8266WiFi.h> for ESP8266

const char* ssid = "YourWiFiSSID";     // Replace with your WiFi SSID
const char* password = "YourWiFiPassword"; // Replace with your WiFi password

void setup() {
  Serial.begin(115200);
  delay(10);

  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  // Nothing needed here for simple connectivity check
}
