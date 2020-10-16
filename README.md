# open-drawing-machine

## About

This is a project by [Gaurav Patekar](https://www.media.mit.edu/people/gauravp/overview/) and [Aarón Montoya-Moraga](https://www.media.mit.edu/people/velouria/overview/), started in 2020, for the [Future Sketches](https://www.media.mit.edu/groups/future-sketches/overview/) research group at [MIT Media Lab](https://www.media.mit.edu/)

This project is a open source, low cost, do it yourself drawing machine.

## Inspiration

This project is both a tutorial about how to buid one, and a survey about the landscape of drawing machines and pen plotters.

## Dependencies

This project is built on the shoulders of the following projects:

* [Grbl](https://github.com/grbl/grbl): "Grbl is a no-compromise, high performance, low cost alternative to parallel-port-based motion control for CNC milling. It will run on a vanilla Arduino (Duemillanove/Uno) as long as it sports an Atmega 328."

* [Arduino Uno](https://en.wikipedia.org/wiki/Arduino_Uno): "The Arduino Uno is an open-source microcontroller board based on the Microchip ATmega328P microcontroller and developed by Arduino.cc."

* [G-code](https://en.wikipedia.org/wiki/G-code): "G-code (also RS-274), which has many variants, is the common name for the most widely used computer numerical control (CNC) programming language. It is used mainly in computer-aided manufacturing to control automated machine tools."

## Software

As of September 2020, we are using the following steps:

* [https://github.com/arnabdasbwn/grbl-coreXY-servo](https://github.com/arnabdasbwn/grbl-coreXY-servo): fork of grbl for 2 motors for XY movement, and a servo for Z movement..

The Open Drawing machine can be controlled with the [openFrameworks](https://openframeworks.cc/) addon ofxOpenDrawingMachine, available at [https://github.com/montoyamoraga/ofxOpenDrawingMachine]()

### Software Configuration

On the G-code sender, you should program these:

* $100 = 80, steps/mm for x axis
* $101 = 80, steps/mm for y axis

## Hardware

The parts we designed are available for 3D printing.

## Bill of materials

* [Wishlist at Amazon.com](https://www.amazon.com/hz/wishlist/ls/1QS8639F5SNBW?&sort=default)

## License

MIT
