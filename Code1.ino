#include <WiFi.h>

const char* ssid = "WiFi_SSID";
const char* password = "WiFi_PASSWORD";

// Röle pinleri
const int RelayPin1 = 23;  
const int RelayPin2 = 21;
const int RelayPin3 = 22;
const int RelayPin4 = 19;

void setup() {
  Serial.begin(115200);

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("WiFi bağlantısı bekleniyor...");
  }
  Serial.println("WiFi bağlandı!");

  pinMode(RelayPin1, OUTPUT);
  pinMode(RelayPin2, OUTPUT);
  pinMode(RelayPin3, OUTPUT);
  pinMode(RelayPin4, OUTPUT);

  digitalWrite(RelayPin1, HIGH);
  digitalWrite(RelayPin2, HIGH);
  digitalWrite(RelayPin3, HIGH);
  digitalWrite(RelayPin4, HIGH);
}

void loop() {

  digitalWrite(RelayPin1, LOW);
  delay(1000);

  digitalWrite(RelayPin1, HIGH);
  delay(1000);

  digitalWrite(RelayPin2, LOW);
  delay(1000);

  digitalWrite(RelayPin2, HIGH);
  delay(1000);

  digitalWrite(RelayPin3, LOW);
  delay(1000);

  digitalWrite(RelayPin3, HIGH);
  delay(1000);

  digitalWrite(RelayPin4, LOW);
  delay(1000);

  digitalWrite(RelayPin4, HIGH);
  delay(1000);
}
