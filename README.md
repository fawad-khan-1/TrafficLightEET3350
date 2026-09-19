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

## Demonstration

The following video was recorded when the original project was completed and demonstrates the Arduino traffic intersection controller operating on the physical breadboard hardware:

[View the Arduino Traffic Intersection Demonstration](demo/ArduinoTrafficController-Demo.mp4)

## TM4C123G Port

This Arduino project later served as the basis for a port to the Texas Instruments TM4C123G LaunchPad.

The later project preserved the original traffic-control behavior while adapting the hardware interface for the TM4C123G platform.

The TM4C123G implementation was also tested on physical hardware.

[View the TM4C123G Traffic Intersection Project](PASTE-TM4C123G-REPOSITORY-URL-HERE)

## Project Purpose

The original project provided hands-on experience with microcontroller programming, digital inputs and outputs, traffic-control sequencing, breadboard circuit construction, and testing embedded software on physical hardware.

Revisiting the project later by porting it to the TM4C123G provided an opportunity to implement the same control system on a different embedded platform.