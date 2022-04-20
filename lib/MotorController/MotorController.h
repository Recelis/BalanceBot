#ifndef MOTORCONTROLLER_H
#define MOTORCONTROLLER_H

#include <Arduino.h>
// https://hackaday.io/project/8856-incubator-controller/log/29291-node-mcu-motor-shield

#define MAX_SPEED 100 // found through testing. cm/s

class MotorController
{
private:
    int pwm;
    int dir;
    int convertSpeedToDriveValue(double speed);

public:
    MotorController(int pwmIn, int dirIn);
    void driveMotor(double speed);
    ~MotorController();
};

#endif