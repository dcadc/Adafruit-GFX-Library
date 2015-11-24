#ifndef GLCDFONT_H
#define GLCDFONT_H

#ifdef __AVR__
 #include <avr/io.h>
 #include <avr/pgmspace.h>
#elif defined(ESP8266)
 #include <pgmspace.h>
#else
 #define PROGMEM
#endif

#if 1
#include "font3x7.h"
#else
#include "font5x7.h"
#endif

#endif
