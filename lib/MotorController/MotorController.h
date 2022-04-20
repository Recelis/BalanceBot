#ifndef MOTORCONTROLLER_H
#define MOTORCONTROLLER_H

#include <Arduino.h>
// https://hackaday.io/project/8856-incubator-controller/log/29291-node-mcu-motor-shield

#define MAX_SPEED 100 // found through testing. cm/s
#define FORWARD 0 
#define BACKWARD 1

class MotorController
{
private:
    int pwm;
    int dir;
    int defaultDir; // 0, or 1 because one motor is facing in the other direction.
    int convertSpeedToDriveValue(double speed);

public:
    MotorController(int pwmIn, int dirIn, int defDir);
    void driveMotor(double speed);
    ~MotorController();
};

#endif