# Open Drawing Machine

## Technology

This project is built on the shoulders of the following projects:

* [Arduino Uno](https://en.wikipedia.org/wiki/Arduino_Uno): "The Arduino Uno is an open-source microcontroller board based on the Microchip ATmega328P microcontroller and developed by Arduino.cc."

* [G-code](https://en.wikipedia.org/wiki/G-code): "G-code (also RS-274), which has many variants, is the common name for the most widely used computer numerical control (CNC) programming language. It is used mainly in computer-aided manufacturing to control automated machine tools."

* [Grbl](https://github.com/grbl/grbl): "Grbl is a no-compromise, high performance, low cost alternative to parallel-port-based motion control for CNC milling. It will run on a vanilla Arduino (Duemillanove/Uno) as long as it sports an Atmega 328."

## Dependencies

As of September 2020, we are using the following dependencies:

* [https://github.com/arnabdasbwn/grbl-coreXY-servo](https://github.com/arnabdasbwn/grbl-coreXY-servo): this repository is a fork of vanilla grbl, for 2 motors for XY movement, and a servo for Z movement.

The Open Drawing machine can be controlled with the [openFrameworks](https://openframeworks.cc/) addon ofxOpenDrawingMachine, available at [https://github.com/montoyamoraga/ofxOpenDrawingMachine](https://github.com/montoyamoraga/ofxOpenDrawingMachine)

## Software Configuration

On the G-code sender, you should program these:

* $100 = 80, steps/mm for x axis
* $101 = 80, steps/mm for y axis
