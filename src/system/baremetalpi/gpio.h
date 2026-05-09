#pragma once

#include <circle/gpiopin.h>
#include <circle/gpiomanager.h>
#include "utils.h"
#include <stdio.h>

// Testing stuff
class TICGpio {
    private:
        CGPIOPin* testPin;
        CGPIOPin* testPin2;

    public:
        TICGpio() {
            testPin = new CGPIOPin();
            testPin->AssignPin(40);
            testPin->SetMode(TGPIOMode::GPIOModeOutput);
            testPin2 = new CGPIOPin();
            testPin2->AssignPin(21);
            testPin2->SetMode(TGPIOMode::GPIOModeOutput);
        };

        void On() {
            dbg("++++++++++++++++GOING ON+++++++++++++++\n");
            testPin->Write(HIGH);
            testPin2->Write(HIGH);
        }

        void Off() {
            dbg("++++++++++++++++GOING OFF+++++++++++++++\n");
            testPin->Write(LOW);
            testPin2->Write(LOW);
        }
};

void initGPIO();
void GPIOOn();
void GPIOOff();
