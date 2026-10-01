// Неделя 2: WiFi + MQTT.
// ESP32 подключается к WiFi и публикует сообщения в MQTT-брокер.

#include <WiFi.h>
#include <PubSubClient.h>

const char* WIFI_SSID = "YOUR_WIFI_SSID";
const char* WIFI_PASSWORD = "YOUR_WIFI_PASSWORD";
const char* MQTT_HOST = "YOUR_MQTT_HOST";
const int MQTT_PORT = 1883;
const char* MQTT_TOPIC = "greenhouse/hello";

WiFiClient wifiClient;
PubSubClient mqttClient(wifiClient);

void setup() {
  Serial.begin(115200);
  // TODO: подключиться к WiFi и дождаться статуса WL_CONNECTED
  // TODO: указать mqttClient.setServer(MQTT_HOST, MQTT_PORT)
}

void loop() {
  // TODO: поддерживать соединение (mqttClient.loop())
  // TODO: переподключаться при обрыве
  // TODO: раз в несколько секунд публиковать сообщение в MQTT_TOPIC
}
