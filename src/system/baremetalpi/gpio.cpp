#include "gpio.h"
#include "utils.h"

TICGpio* gpioTestObj;

void initGPIO() {
    dbg("GPIO Init..\n");
    gpioTestObj = new TICGpio();
}

void GPIOOn() {
    dbg("GPIO On..\n");
    gpioTestObj->On();
}

void GPIOOff() {
    dbg("GPIO off..\n");
    gpioTestObj->Off();
}
