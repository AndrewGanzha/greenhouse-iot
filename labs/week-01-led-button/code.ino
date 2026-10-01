// Неделя 1: LED и кнопка.
// Кнопка подключена к GPIO 4 (INPUT_PULLUP), LED — к GPIO 2.
// Нажатие кнопки зажигает светодиод.

const int LED_PIN = 2;
const int BUTTON_PIN = 4;

void setup() {
  // TODO: настроить LED_PIN как выход
  // TODO: настроить BUTTON_PIN как вход с подтяжкой (INPUT_PULLUP)
}

void loop() {
  // TODO: прочитать состояние кнопки
  // TODO: если кнопка нажата (LOW) — зажечь LED, иначе погасить
}
