#ifndef __PROPULSION_H_
#define __PROPULSION_H_

#include "MotorController.h"

// controls the movement of the robot
// is set up to deal with magnitude and direction of the robot so that it can change direction.
class Propulsion
{
private:
    int magnitude;
    int direction;

public:
    Propulsion();
    ~Propulsion();
}

#endif