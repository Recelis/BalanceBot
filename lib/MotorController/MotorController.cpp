#include "MotorController.h"

MotorController::MotorController(int pwmIn, int dirIn){
    pwm = pwmIn;
    dir = dirIn;
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
    analogWrite(pwm, driveValue);
        digitalWrite(dir, 1);
    // if (speed > 0)
    // {
    //     analogWrite(pwm, driveValue);
    //     digitalWrite(dir, 1);
    // }
    // else if (speed < 0)
    // {
    //     analogWrite(pwm, driveValue);
    //     digitalWrite(dir, 0);
    // }
    // else
    // {
    //     analogWrite(pwm, 0);
    //     digitalWrite(dir, 0);
    // }
}

MotorController::~MotorController(){};