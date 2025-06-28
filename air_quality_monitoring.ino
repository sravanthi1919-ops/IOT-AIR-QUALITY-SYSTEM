#include <WiFi.h>
#include <HTTPClient.h>

const char* ssid = "Wokwi-GUEST";
const char* password = "";

const char* server = "http://api.thingspeak.com/update";
String apiKey = "WUEVZEKO16J1AV1N";  // Replace this

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi...");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println(" Connected!");
}

void loop() {
  float pm25 = random(20, 150);   // Simulated PM2.5 value
  float co2 = random(300, 1000);  // Simulated CO2 value

  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    String url = String(server) + "?api_key=" + apiKey + "&field1=" + String(pm25) + "&field2=" + String(co2);
    http.begin(url);
    int httpResponseCode = http.GET();
    if (httpResponseCode > 0) {
      Serial.println("Data sent to ThingSpeak!");
    } else {
      Serial.print("Error sending data. Code: ");
      Serial.println(httpResponseCode);
    }
    http.end();
  }
  delay(15000); // ThingSpeak allows one update every 15 seconds
}
