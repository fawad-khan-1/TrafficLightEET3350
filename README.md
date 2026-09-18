# TrafficLightEET3350
Original Arduino implementation → later port to the TM4C123G using C/TivaWare
# Arduino Traffic Intersection Controller

This project implements a traffic intersection controller using an Arduino Uno, LEDs, and push buttons. It was originally developed as part of a university embedded systems course.

The system models north-south traffic, east-west traffic, and a pedestrian crossing using separate red, yellow, and green LEDs. Push buttons are used to simulate traffic and pedestrian requests.

## Features

- North-south traffic light sequence
- East-west traffic light sequence
- Pedestrian crossing sequence
- Push-button traffic inputs
- Red, yellow, and green LED outputs
- State-based control of intersection behavior

## Hardware

- Arduino Uno
- Breadboard
- LEDs
- Push buttons
- Resistors
- Jumper wires

## Software

- Arduino IDE
- C/C++ (Arduino)

## System Operation

The program monitors three inputs representing:

- Pedestrian crossing request
- North-south traffic request
- East-west traffic request

Based on these inputs, the controller executes the appropriate traffic sequence while controlling the corresponding LEDs.

The program is organized around three primary traffic-control functions:

- `NSTraffic()` – controls the north-south traffic sequence
- `EWTraffic()` – controls the east-west traffic sequence
- `PedCrossWalk()` – controls the pedestrian crossing sequence

## TM4C123G Port

This project later served as the basis for a port to the Texas Instruments TM4C123G LaunchPad.

The TM4C123G version preserves the original traffic-control behavior while replacing the Arduino-specific hardware interface with TM4C123G GPIO control using the TivaWare Driver Library.

The port was implemented and tested on physical TM4C123G hardware.

See the TM4C123G version here:

[TM4C123G Traffic Intersection](https://github.com/fawad-khan-1/Traffic-Intersection)

## Project Background

The original Arduino implementation was completed as a university embedded systems project. The later TM4C123G version was created to revisit the original design using a different microcontroller platform and a lower-level embedded development environment. 