# Неделя 3: Сенсоры (DHT22)

## Цель

Считывать температуру и влажность с датчика DHT22 и публиковать их в MQTT.

## Компоненты

- ESP32
- Датчик DHT22
- Резистор ~10 кОм (подтяжка data-линии, если нужна)
- WiFi + MQTT из недели 2

## Шаги

1. Подключить DHT22: VCC → 3.3V, GND → GND, DATA → GPIO (например, GPIO 15).
2. Установить библиотеку DHT (Adafruit DHT sensor library).
3. Считывать `temperature` и `humidity`.
4. Публиковать в топики, например `greenhouse/sensor/temp` и `greenhouse/sensor/humidity`.

## Результат

_Пока пусто — заполню после запуска._
