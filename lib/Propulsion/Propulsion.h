#ifndef PROPULSION_H
#define PROPULSION_H

#include "MotorController.h"
#include "Arduino.h"

// controls the movement of the robot
// is set up to deal with magnitude and direction of the robot so that it can change direction.
class Propulsion
{
private:
    double magnitude, direction;

    MotorController MotorA, MotorB;


public:
    Propulsion();
    ~Propulsion();
    void driveRobot(double magnitude, double direction);
};

#endif