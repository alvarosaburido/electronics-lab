/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/alvarosaburido/as/electronics/electronics-lab/Particle/tones/src/tones.ino"
void setup();
void loop();
#line 1 "/Users/alvarosaburido/as/electronics/electronics-lab/Particle/tones/src/tones.ino"
int speakerPin = D0;

// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.

}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  tone(speakerPin, 2093, 0);
}
