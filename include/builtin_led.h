#ifndef BUILTIN_LED_H
#define BUILTIN_LED_H

#include "Arduino.h"

class BuiltinLed
{
    public:
        BuiltinLed();
        void begin();
        void on();
        void off();
        void on(int millis);
        void off(int millis);
};

#endif // BUILTIN_LED_H