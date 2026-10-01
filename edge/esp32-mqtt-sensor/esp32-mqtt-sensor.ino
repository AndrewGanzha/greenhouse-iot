// ESP32 MQTT Sensor — WiFi + MQTT + DHT22.
// Публикует температуру и влажность в MQTT-брокер.

#include <WiFi.h>
#include <PubSubClient.h>
#include <DHT.h>

const char* WIFI_SSID = "YOUR_WIFI_SSID";
const char* WIFI_PASSWORD = "YOUR_WIFI_PASSWORD";
const char* MQTT_HOST = "YOUR_MQTT_HOST";
const int MQTT_PORT = 1883;
const char* TOPIC_TEMP = "greenhouse/sensor/temp";
const char* TOPIC_HUMIDITY = "greenhouse/sensor/humidity";

const int DHT_PIN = 15;
const int DHT_TYPE = DHT22;

DHT dht(DHT_PIN, DHT_TYPE);
WiFiClient wifiClient;
PubSubClient mqttClient(wifiClient);

void setup() {
  Serial.begin(115200);
  // TODO: dht.begin()
  // TODO: подключиться к WiFi и дождаться WL_CONNECTED
  // TODO: mqttClient.setServer(MQTT_HOST, MQTT_PORT)
}

void loop() {
  // TODO: поддерживать mqttClient.loop() и переподключаться при обрыве
  // TODO: читать dht.readTemperature() и dht.readHumidity()
  // TODO: публиковать значения в TOPIC_TEMP и TOPIC_HUMIDITY
  // TODO: пауза между измерениями (например, 2 секунды)
}
