#ifndef __MOTORCONTROLLER_H_
#define __MOTORCONTROOLLER_H_

#include <Arduino.h>

#define MAX_SPEED 30 // found through testing. cm/s

class MotorController
{
    private:
        int pin0;
        int pin1;
        int convertSpeedToDriveValue(double speed);
    public:
        MotorController(int pinA, int pinB);
        void driveMotor(double speed);
        ~MotorController();
};

#endif