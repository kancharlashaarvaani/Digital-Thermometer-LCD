# Digital Thermometer with LCD Display

A simple Arduino-based digital thermometer that reads temperature using a temperature sensor and displays the measured temperature in Fahrenheit on a 16×2 LCD.

## Project Overview

This project demonstrates the use of an **Arduino Uno**, **temperature sensor**, and **16×2 LCD display** to create a basic digital thermometer.

The sensor provides an analog voltage corresponding to temperature. The Arduino reads this analog value, converts it into a temperature value, and displays the result on the LCD.

## Objectives

* Measure temperature using an analog temperature sensor.
* Process the sensor output using Arduino.
* Convert the measured temperature into Fahrenheit.
* Display the temperature on a 16×2 LCD.
* Understand the interfacing of sensors and LCD displays with Arduino.

## Components Used

* Arduino Uno
* 16×2 LCD Display
* TMP36 Temperature Sensor
* 10kΩ Potentiometer
* Resistor
* Breadboard
* Jumper Wires
* USB Cable / Power Supply

## Working Principle

The temperature sensor produces an analog voltage that changes according to the surrounding temperature.

The Arduino reads this analog signal through **analog input A0**. The program converts the analog reading into voltage and then calculates the corresponding temperature.

The temperature is converted from Celsius to Fahrenheit using:

**°F = (°C × 9/5) + 32**

The calculated temperature is then displayed on the second line of the 16×2 LCD.

##LCD Connections

The LCD is operated in 4-bit mode.

| LCD Signal | Arduino Pin |
| ---------- | ----------: |
| RS         |          12 |
| E          |          11 |
| D4         |           5 |
| D5         |           4 |
| D6         |           3 |
| D7         |           2 |

The sensor output is connected to **A0**.

## Program

The Arduino source code is available in:

[`Digital_Thermometer.ino`](Digital_Thermometer.ino)

The program uses the Arduino `LiquidCrystal` library to control the LCD.

## Output

The LCD displays the current temperature in Fahrenheit.

Example:

```text
Today's temp:
78.23°F
```

The displayed value changes according to the sensor reading.

## Simulation

The project was designed and tested using **Tinkercad Circuits**.

The simulation demonstrates the interaction between the Arduino, temperature sensor, and LCD display.

## Repository Contents

| File                      | Description           |
| ------------------------- | --------------------- |
| `Digital_Thermometer.ino` | Arduino source code   |
| `Project1.pptx`           | Project presentation  |
| `README.md`               | Project documentation |

## Future Improvements

* Add temperature display in both Celsius and Fahrenheit.
* Improve temperature measurement accuracy.
* Add minimum and maximum temperature tracking.
* Add an alert when the temperature crosses a predefined limit.
* Use a more advanced temperature sensor for improved accuracy.
* Develop a compact hardware version of the project.

## Technologies Used

* Arduino Uno
* Arduino C/C++
* 16×2 LCD
* Analog Temperature Sensor
* Tinkercad Circuits

## Author

**Kancharla Shaarvaani**

B.Tech — Electronics and Communication Engineering

---

 If you find this project useful, feel free to explore the repository and its source code.
