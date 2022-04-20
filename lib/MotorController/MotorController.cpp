#include "MotorController.h"

MotorController::MotorController(int pwmIn, int dirIn, int defDir){
    pwm = pwmIn;
    dir = dirIn;
    defaultDir = defDir;
    pinMode(pwm, OUTPUT);
    pinMode(dir, OUTPUT);
};

int MotorController::convertSpeedToDriveValue(double speed)
{
    return int(speed / MAX_SPEED * 255);
}

void MotorController::driveMotor(double speed)
{
    Serial.println("drive motor");
    int driveValue = convertSpeedToDriveValue(speed);
    Serial.println(speed);
    Serial.println(driveValue);
    Serial.println(pwm);
    Serial.println(dir);
    int motorDirection = 0; // forward
    if (speed > 0)
    {
        if (defaultDir == BACKWARD)
            motorDirection = 1;
        analogWrite(pwm, driveValue);
        digitalWrite(dir, motorDirection);
    }
    else if (speed < 0)
    {
        motorDirection = 1;
        if (defaultDir == BACKWARD)
            motorDirection = 0;
        analogWrite(pwm, driveValue);
        digitalWrite(dir, motorDirection);
    }
    else
    {
        analogWrite(pwm, 0);
        digitalWrite(dir, 0);
    }
}

MotorController::~MotorController(){};