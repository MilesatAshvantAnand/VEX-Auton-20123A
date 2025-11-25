#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;

//The motor constructor takes motors as (port, ratio, reversed), so for example
//motor LeftFront = motor(PORT1, ratio6_1, false);

//Add your devices below, and don't forget to do the same in robot-config.h:


void vexcodeInit( void ) {

  LeftONE = motor(PORT1, ratio6_1, false);
  LeftTWO = motor(PORT2, ratio6_1, false);
  LeftTHREE = motor(PORT3, ratio6_1, false);

  RightONE = motor(PORT10, ratio6_1, false);
  RightTWO = motor(PORT12, ratio6_1, false);
  RightTHREE = motor(PORT13, ratio6_1, false);
  //The above line defines a motor called LeftFront plugged into PORT1, with a 600 RPM cartridge, not reversed.
}