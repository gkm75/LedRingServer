#include <Arduino.h>
#include <builtin_led.h>

BuiltinLed biLed;

void setup() {
  biLed.begin();
}

void loop() {
  biLed.on(1000);
  biLed.off(1000);
}
