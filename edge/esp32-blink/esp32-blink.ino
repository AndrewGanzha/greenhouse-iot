// ESP32 Blink — мигание встроенным светодиодом.
// На большинстве плат ESP32 встроенный LED подключён к GPIO 2.

const int LED_PIN = 2;

void setup() {
  // Настраиваем пин светодиода как выход
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);  // включаем светодиод
  delay(1000);                  // ждём 1 секунду
  digitalWrite(LED_PIN, LOW);   // выключаем светодиод
  delay(1000);                  // ждём 1 секунду
}
