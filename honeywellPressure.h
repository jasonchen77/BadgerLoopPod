#include <xc.h>
#include <stdint.h>
#include <float.h>
#include "I2C.h"

#define PMAX            1.60
#define OUTMAX          16384.00
#define BARSCALAR       9.7656*(10^-5)                //(PMAX/OUTMAX)
#define PSISCALAR       0.001416                    //((23.206)/OUTMAX)
#define KPASCALAR       0.009766                    //((160.00)/OUTMAX)
#define TEMPSCALAR      0.097704                    //((200.00)/(2047.0))


void getPressureData(uint8_t addr, uint8_t *data);
void printPressureData(uint8_t *data);