#ifndef RBDMCUESP8266_H
#define RBDMCUESP8266_H

#include "Arduino.h"
#include "RBDdimmer.h"
#include "pins_arduino.h"
#include <stdio.h>
#include "ets_sys.h"

static const uint8_t powerBuf[] = {
    100,100,100,94,93,93,92,92,92,91,
    91,91,90,89,88,87,86,85,85,84,83,
    82,81,80,79,78,77,76,75,74,74,73,
    72,72,71,70,70,69,68,67,66,66,65,
    64,63,62,62,61,60,59,58,57,56,55,
    54,53,53,52,51,51,50,49,48,47,46,
    45,44,43,42,41,40,39,38,37,36,35,
    34,33,32,31,30,29,28,27,26,24,22,
    20,19,18,17,16,14,12,10,8,6,3,3,3
};



void isr_ext(void);
void IRAM_ATTR onTimerISR();

#endif
