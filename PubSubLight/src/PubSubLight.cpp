/*
 * Project myProject
 * Author: Your Name
 * Date:
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"

// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(AUTOMATIC);

// Run the application and system concurrently in separate threads
SYSTEM_THREAD(ENABLED);

// Show system, cloud connectivity, and application logs over USB
// View logs with CLI using 'particle serial monitor --follow'
SerialLogHandler logHandler(LOG_LEVEL_INFO);

double currentLightLevel;

// setup() runs once, when the device is first turned on
void setup()
{
  // Put initialization like pinMode and begin functions here
  pinMode(A0, INPUT);
}

// loop() runs over and over again, as quickly as it can execute.
void loop()
{
  // The core of your code will likely live here.

  double lightAnalogVal = analogRead(A0);
  currentLightLevel = map(lightAnalogVal, 0.0, 4095.0, 0.0, 100.0);

  if (currentLightLevel > 50)
  {
    Particle.publish("light-meter/level", String(currentLightLevel), PRIVATE);
  }
}
