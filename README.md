# Arduino Traffic Intersection Controller

This project implements a traffic intersection controller using an Arduino Uno, LEDs, and push-button inputs. It was originally developed as part of a university embedded systems course.

The system models north-south traffic, east-west traffic, and a pedestrian crossing. The controller responds to traffic and pedestrian requests and executes the appropriate traffic-light sequence.

The completed project was implemented and tested on physical Arduino hardware.

## Project Features

- Arduino Uno microcontroller
- North-south traffic-light control
- East-west traffic-light control
- Pedestrian crossing sequence
- Push-button traffic and pedestrian inputs
- Red, yellow, and green LED outputs
- Embedded C/C++ programming
- Physical breadboard implementation
- Hardware testing

## System Operation

The traffic intersection uses push-button inputs to represent traffic and pedestrian requests.

The program monitors three types of requests:

- North-south traffic
- East-west traffic
- Pedestrian crossing

Based on the detected input, the program executes the appropriate traffic-control sequence and controls the LEDs representing the traffic signals.

The original program is organized around three primary traffic-control functions:

- `NSTraffic()` – controls the north-south traffic sequence
- `EWTraffic()` – controls the east-west traffic sequence
- `PedCrossWalk()` – controls the pedestrian crossing sequence

## Hardware

The original implementation used:

- Arduino Uno
- Breadboard
- LEDs
- Push buttons
- Resistors
- Jumper wires

The completed circuit was assembled and tested on physical hardware.

## Software

- Arduino IDE
- Arduino C/C++

## Repository Contents

The repository contains the original Arduino source code used for the traffic intersection controller.

The primary program is:

- `TrafficLightEET3350.ino` – original Arduino traffic intersection program

The repository also contains a video recorded when the original project was completed demonstrating the traffic controller operating on physical hardware.

## Hardware Demonstration

The following video was recorded when the original project was completed and demonstrates the Arduino traffic intersection controller operating on the physical breadboard hardware:

[View the Arduino Traffic Intersection Demonstration](demo/ArduinoTrafficController-Demo.mp4)

## TM4C123G Port

This Arduino project later served as the basis for a port from the original Texas Instruments TM4C123G LaunchPad.

This later project preserved the original traffic-control behavior while adapting the hardware interface for the Arduino platform.

The TM4C123G implementation was also tested on physical hardware, and its hardware demonstration can be seen on the TM4C123G repository page by clicking the following link:

[View the TM4C123G Traffic Intersection Project](https://github.com/fawad-khan-1/Traffic-Intersection)

## Project Purpose

This project is a port of an earlier traffic intersection controller that I originally developed for the Texas Instruments TM4C123G microcontroller as part of a university undergraduate Embedded Systems course.

The original TM4C123G implementation controls north-south traffic, east-west traffic, and a pedestrian crossing using LEDs and push-button inputs.

For this project, I ported the original design to an Arduino Uno microcontroller. The traffic-control behavior was preserved while the TM4C123G-specific I/O was replaced with the Arduino-specific C library functions.The original project was implemented with TM4C123G GPIO control using the TivaWare Driver Library.

The original project provided hands-on experience with microcontroller programming, digital inputs and outputs, traffic-control sequencing, breadboard circuit construction, and testing embedded software on physical hardware.

Revisiting the original project later by porting it to an Arduino Uno microcontroller provided an opportunity to implement the same control system on a different embedded platform.