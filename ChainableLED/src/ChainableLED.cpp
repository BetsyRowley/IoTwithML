/* 
 * Project myProject
 * Author: Your Name
 * Date: 
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"
#include "Grove_ChainableLED.h"
ChainableLED leds(A4, A5, 1);



// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(AUTOMATIC);

// Run the application and system concurrently in separate threads
SYSTEM_THREAD(ENABLED);

// Show system, cloud connectivity, and application logs over USB
// View logs with CLI using 'particle serial monitor --follow'
SerialLogHandler logHandler(LOG_LEVEL_INFO);

int toggleLed(String args) {
leds.setColorHSB(0, 0.0, 1.0, 0.5);

delay(500);

leds.setColorHSB(0, 0.0, 0.0, 0.0);

delay(500);

return 1;
}

// setup() runs once, when the device is first turned on
void setup() {
  // Put initialization like pinMode and begin functions here
  leds.init();
  leds.setColorHSB(0, 0.0, 0.0, 0.0);
  Particle.function("toggleLed", toggleLed);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.

  //toggleLed("");
}
