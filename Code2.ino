#include <WiFi.h>

const char* ssid = "WiFi_SSID";
const char* password = "WiFi_PASSWORD";

const int RelayPins[] = {23, 21, 22, 19};

const int numRelays = sizeof(RelayPins) / sizeof(RelayPins[0]);

void setup() {
  Serial.begin(115200);

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("WiFi connection is expected...");
  }
  Serial.println("WiFi connected!");

  for (int i = 0; i < numRelays; i++) {
    pinMode(RelayPins[i], OUTPUT);
  }

  for (int i = 0; i < numRelays; i++) {
    digitalWrite(RelayPins[i], HIGH);
  }
}

void loop() {

  for (int i = 0; i < numRelays; i++) {
    digitalWrite(RelayPins[i], LOW);
    delay(1000);
  }

  for (int i = 0; i < numRelays; i++) {
    digitalWrite(RelayPins[i], HIGH);
    delay(1000);
  }
}
