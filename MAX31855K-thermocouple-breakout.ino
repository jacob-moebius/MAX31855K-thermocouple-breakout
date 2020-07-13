/**
 * Guide for hooking up and getting started with the Sparkfun MAX31855K
 * Thermocouple Breakout.
 * 
 * @author: Jacob Moebius
 * 
 * Resources: 
 *   Sparkfun MAX31855K GitHub repo:
 *     https://github.com/sparkfun/SparkFun_MAX31855K_Thermocouple_Breakout_Arduino_Library
 *   Arduino SPI pin reference ("Connections" Section):
 *     https://www.arduino.cc/en/reference/SPI
 *   Arduino Uno:
 *     https://www.sparkfun.com/products/11021
 *   Sparkfun MAX31855K Thermocouple Breakout:
 *     https://www.sparkfun.com/products/13266
 *   Thermocouple Connector (optional):
 *     https://www.sparkfun.com/products/13612
 * 
 * Notes:
 *   I highly recommend using the Sparkfun/Adafruit repositories for their respective
 *   devices and components. They are not all beginner friendly, but are excellent
 *   resources for learning how to setup and use their devices.
 *   
 *   You have the option of connecting a thermocouple to the breakout using another method
 *   that fits your needs better. The '+' and '-' throughholes of interest are indicated
 *   on the breakout.
 */

#include <SparkFunMAX31855k.h>
#include <SPI.h>

// Define SPI Arduino pin numbers (Arduino Uno)
// Using standard CS line (SS for SPI)
// SCK & MISO are defined by Arduino
const uint8_t CHIP_SELECT_PIN = 10;

// Powering board straight from Arduino Uno 3.3V (required voltage).
// All digital outputs are 5V for a 5V board like the Arduino Uno.
// Pin number in this specific setup is only used to instantiate one instance of the required
// device class. The board will not output 3.3V from the digital pins unless
// a 3.3V board, like the Pro Mini/Micro 3.3V is used.
const uint8_t VCC = 14;

// Grounded via GND on Arduino Uno.
// Pin number in this specific setup is only used to instantiate one instance of the required
// device class. The board will not change this pin to a ground.
const uint8_t GND = 15;

// Instantiate an instance of the SparkFunMAX31855k class
SparkFunMAX31855k probe(CHIP_SELECT_PIN, VCC, GND);

void setup() {
  Serial.begin(9600);
  Serial.println("\nBeginning...");

  // Allow IC to stabilize to prevent noisy initial readings.
  delay(50);
}

void loop() {
  //Take initial readings
  float temperatureC = probe.readTempC();
  float temperatureF = probe.readTempF();

  // Make sure the readings return a number before outputting.
  if (!isnan(temperatureC) && !isnan(temperatureF)) {
    Serial.print("Temp [C] = ");
    Serial.println(temperatureC);
    Serial.print("Temp [F] = ");
    Serial.println(temperatureF);
    Serial.println();
  }
  // Else block can be used for verification of the readings.
  // If the device reads NaN, let the user know.
  // In this case the built-in LED on the Arduino Uno is turned off.
//  else {
//    digitalWrite(LED_BUILTIN, LOW);
//  }

  // Rate at which the data stream reads and presents data points.
  delay(1000);
}
