# MAX31855K-thermocouple-breakout
A guide for hooking up and getting started with the Sparkfun MAX31855K Thermocouple Breakout. The breakout is intended to interpret temperature readings from a thermocouple to an Arduino board.

## Setup:
  * Download the code and open it in the Arduino IDE.
  * Wire up the MAX31855K Thermocouple Breakout to an Arduino board (an Arduino Uno is used in this example).
  * Connect the Arduino board to the computer running the Arduino IDE.
  * Upload the code from the Arduino IDE to the Arduino board (<kbd>Ctrl+U</kdb> is the default shortcut).
  * Open the Serial Monitor of the Arduino IDE (<kdb>Ctrl+Shift+M</kdb> is the default shortcut). The Serial Monitor window will open and should show "Beginning..." followed by the temperature of the thermocouple in Celcius and Fahrenheit in 1 second intervals.

## Resources:
  ### Sparkfun MAX31855K GitHub repo:
    https://github.com/sparkfun/SparkFun_MAX31855K_Thermocouple_Breakout_Arduino_Library
  ### Arduino SPI pin reference ("Connections" Section):
    https://www.arduino.cc/en/reference/SPI
  ### Arduino Uno:
    https://www.sparkfun.com/products/11021
  ### Sparkfun MAX31855K Thermocouple Breakout:
    https://www.sparkfun.com/products/13266
  ### Thermocouple Connector (optional):
    https://www.sparkfun.com/products/13612
 
## Notes:
  I highly recommend using the Sparkfun/Adafruit repositories for their respective
  devices and components. They are not all beginner friendly, but are excellent
  resources for learning how to setup and use their devices.
  
  You have the option of connecting a thermocouple to the breakout using another method
  that fits your needs better. The '+' and '-' throughholes of interest are indicated
  on the breakout.
