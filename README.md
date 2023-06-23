# Smart Garage Control Code

This repository contains the code for a smart garage control system using an Arduino board. The system incorporates various features such as motor control, sensor integration, temperature monitoring, light control, and alert generation.

## Introduction

The code provided in this repository enables the control of a smart garage system using an Arduino board. The system incorporates various features such as motor control, sensor integration, temperature monitoring, light control, and alert generation.

## Prerequisites

To use this code, you will need the following:

- Arduino board (e.g., Arduino Uno)
- Servo motor
- Various sensors (ir1, ir2, ir3, ir4, temp, ldr, ir5, buzzer)
- Buzzer
- LED
- Jumper wires
- Breadboard or prototyping board
- Arduino IDE (Integrated Development Environment) installed on your computer

## Hardware Setup

Follow these steps to set up the hardware for the smart garage system:

1. Connect the Arduino board to your computer using a USB cable.
2. Connect the necessary sensors and components to the Arduino board as per the pin configuration defined in the code.
3. Make sure all the connections are secure and the components are properly powered.

## Usage

After the hardware and software setup, you can use the smart garage control system as follows:

1. Ensure that the Arduino board is powered on and connected to the necessary components.
2. Open the serial monitor in the Arduino IDE (baud rate: 9600) to view the temperature readings.
3. The system will continuously monitor the sensors and perform the following actions:
   - Display the available parking spaces on a seven-segment display.
   - Generate an audible alert if the temperature exceeds a threshold value.
   - Control the brightness of an LED based on the ambient light level.
   - Automatically open and close the garage door when appropriate sensors are triggered.

