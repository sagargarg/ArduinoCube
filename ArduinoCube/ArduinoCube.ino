#include <avr/pgmspace.h> // allows use of PROGMEM to store patterns in flash

#define CUBESIZE 4
#define PLANESIZE CUBESIZE*CUBESIZE
#define PLANETIME 3333 // time each plane is displayed in us -> 100 Hz refresh
#define TIMECONST 20 // multiplies DisplayTime to get ms - why not =100?

// LED Pattern Table in PROGMEM - last column is display time in 100ms units
// TODO this could be a lot more compact but not with binary pattern representation
prog_uchar PROGMEM PatternTable[] = {
// blink on and off
