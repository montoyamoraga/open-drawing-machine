# open-drawing-machine

## About

This is a project started in 2020 by [Gaurav Patekar](https://www.media.mit.edu/people/gauravp/overview/) and [Aarón Montoya-Moraga](https://www.media.mit.edu/people/velouria/overview/), graduate students and research assistants at the [Future Sketches](https://www.media.mit.edu/groups/future-sketches/overview/) research group, [MIT Media Lab](https://www.media.mit.edu/), led by [Zach Lieberman](https://www.media.mit.edu/people/zachl/overview/).

This project is a low cost, open source, do it yourself drawing machine.

## Contents

* [hardware/]: CAD models for 3D printing the necessary parts.
* [docs/]: documentation for 

## Inspiration

This project is both a tutorial about how to buid one, and a survey about the landscape of drawing machines and pen plotters.

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

## Credits

* [Gaurav Patekar](https://www.media.mit.edu/people/gauravp/overview/): hardware design, 3D printing, 

* [Aarón Montoya-Moraga](https://www.media.mit.edu/people/velouria/overview/): documentation, library packaging

Additional C++, openFrameworks, Grbl help by [Roy Macdonald](https://github.com/roymacdonald), and inspired on the project [https://github.com/roymacdonald/ofxGrbl2][https://github.com/roymacdonald/ofxGrbl2].

## License

MIT
