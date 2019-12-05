# Alcohol level detection System Using Arduino
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

This project is about a system which detects the level of alcohol in human breadth using concepts of interactive hardware. 


## Repository Contents

* */documentation* - Contains the project proposal and design report of this project which was submitted to the instructor. 
* */hardware* - Contains PCB design files.
* */img* - Contains all the image files of this project
* */libraries* - Contains all the libraries that is required to buid this project.
* */src* - Contains the .ino files for Arduino Mega and ESP8266 Wifi Module.
* */LICENSE* - Contains the details of the license for this project.
  


## Requirements and Materials

The libraries required to build this project are as follows:

* [LiquidCrystal.h](https://github.com/trushil/Arduino-Security-Panel-System/blob/master/libraries/LiquidCrystal.h)

The Software required for this project is [Arduino IDE](https://www.arduino.cc/en/main/software).

Bill of Hardware Materials:
* 1 X Arduino Mega 2560 (Rev3)
* 1 X Breadboard (optional)
* 1 X Piezo Speaker
* 3 X Leds (Red, Blue, Green)
* 1 X Matrix Keypad(4 x 4)
* 1 X 28BYJ-48 Stepper Motor
* 1 X ULN2003A - Stepper Driver Board
* 3 X 220 ohm Resistors
* 1 X Loud Speaker
* 1 X LCD-16x2
* 1 X 1K ohm potentiometer
* 1 X ESP8266 ESP-12E UART WIFI Shield

## Build Instructions
The below schematic gives an idea about how the components are put together to build the system.

![Alt Text](https://github.com/Devjyupeter/Interactive-Hardware/blob/master/breadboard.png)

To know the connections in detail refer to the below circuit diagram.

![Alt Text](https://github.com/Devjyupeter/Interactive-Hardware/blob/master/circuit.png)


## Uploading Sketch
To assemble this system gather the materials mentioned in Requirements and Materials.

### Follow these steps to upload the code to Arduino UNO:

1. Get the code file from [here](https://github.com/Devjyupeter/Interactive-Hardware/blob/master/my_project.ino)
2. Connect the Arduino to the computer with the cable.
3. Open the code file in Arduino IDE.
4. Select the COM port to which the Arduino is connected.
5. Press Ctrl+U or goto Sketch-> upload.






## Credits
These are the third parties which deserves a credit for motivating us for this project:
* Trevor Tomesh, instructor- CS 807 Interactive Hardware
* [Mert Arduino](http://mertarduinotutorial.blogspot.com/)
* [electronic GURU](https://www.youtube.com/watch?v=F28Znry0qcw)
* Family and friends cannot be forgotten :)

## License & Copyrights

© Dev Patel, Computer Science, University Of Regina

Licensed Under [MIT License](LICENSE).
