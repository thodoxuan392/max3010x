#ifndef MAX3010X_PORT_H
#define MAX3010X_PORT_H

#include <stdint.h>
#include <stdbool.h>
#include <hal/clock.h>
#include <string.h>
#include <Wire.h>

#define boolean bool
#define byte uint8_t
#define millis() CLOCK_getTick()
#define delay(ms) CLOCK_delayMs(ms)
#define min(a, b) (a > b ? b : a)

#endif // MAX3010X_PORT_H