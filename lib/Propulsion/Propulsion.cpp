#include "Propulsion.h"

Propulsion::Propulsion(): MotorA(D1, D3, 1),
    MotorB(D2, D4, 0)
{
}

void Propulsion::driveRobot(double mag, double direct)
{
    magnitude = mag;
    direction = direct;
    MotorA.driveMotor(magnitude);
    MotorB.driveMotor(magnitude);
}

Propulsion::~Propulsion()
{
}