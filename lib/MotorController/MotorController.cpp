#include "MotorController.h"

MotorController::MotorController(int pin0, int pin1) {
    pinMode(pin0, OUTPUT);
    pinMode(pin1, OUTPUT);
}

int MotorController::convertSpeedToDriveValue(double speed) {
    return int (speed / MAX_SPEED * 255);
}

void MotorController::driveMotor(double speed){
    int driveValue = convertSpeedToDriveValue(speed);
    if (speed > 0) {
        analogWrite(pin0, 0);
        analogWrite(pin1, driveValue);
    } else if (speed < 0){
        analogWrite(pin0, driveValue);
        analogWrite(pin1, 0);
    } else {
        analogWrite(pin0, 0);
        analogWrite(pin0, 0);
    }

}