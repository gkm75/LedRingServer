#include "builtin_led.h"

BuiltinLed::BuiltinLed()
{}
 
void BuiltinLed::on()
{
    digitalWrite(LED_BUILTIN, HIGH);
}

void BuiltinLed::off()
{
    digitalWrite(LED_BUILTIN, LOW);
}

void BuiltinLed::on(int millis)
{
    digitalWrite(LED_BUILTIN, HIGH);
    delay(millis);
}

void BuiltinLed::off(int millis)
{
    digitalWrite(LED_BUILTIN, LOW);
    delay(millis);
}
