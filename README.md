# Arduino Traffic Intersection Controller

This project implements a traffic intersection controller using an Arduino Uno, LEDs, and push-button inputs.

The project is an Arduino port of a traffic intersection controller that I originally developed using a Texas Instruments TM4C123G microcontroller as part of a university embedded-systems laboratory assignment.

The original TM4C123G version used direct register-level programming and hexadecimal register values. I later adapted the traffic-control logic to the Arduino platform and implemented and tested the Arduino version on physical hardware.

## Project Features

- Arduino Uno microcontroller
- Arduino C/C++
- North-south traffic-light control
- East-west traffic-light control
- Pedestrian crossing sequence
- Push-button traffic and pedestrian inputs
- Red, yellow, and green LED outputs
- Physical breadboard implementation
- Hardware testing

## System Operation

The traffic intersection uses push-button inputs to represent traffic and pedestrian requests.

The program monitors three types of requests:

- North-south traffic
- East-west traffic
- Pedestrian crossing

Based on the detected input, the program executes the appropriate traffic-control sequence and controls the LEDs representing the traffic signals.

The program is organized around three primary traffic-control functions:

- `NSTraffic()` – controls the north-south traffic sequence
- `EWTraffic()` – controls the east-west traffic sequence
- `PedCrossWalk()` – controls the pedestrian crossing sequence

## Hardware

The implementation uses:

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

The repository contains the Arduino source code used for the traffic intersection controller.

The primary program is:

- `TrafficLightEET3350.ino` – Arduino traffic intersection program

A video demonstration of the physical implementation is also included in the repository.

## Hardware Demonstration

The following video demonstrates the Arduino traffic intersection controller operating on the physical Arduino and breadboard hardware:

[Open the Arduino Traffic Intersection Demonstration](demo/Arduino-Traffic-Intersection-Demo.mp4)

> If GitHub does not display the video in its file preview, select **View raw** to open the video file.

## Project Background

The traffic-controller design originated as an assigned university embedded-systems laboratory project using the Texas Instruments TM4C123G microcontroller.

The original TM4C123G implementation used direct register-level programming and hexadecimal register values to interact with the microcontroller hardware.

I later ported the traffic controller to the Arduino Uno, adapting the hardware interface to the Arduino platform while preserving the general traffic-control behavior.

More recently, I returned to the TM4C123G and reimplemented the project using the TivaWare Driver Library instead of the original direct register-level approach.

## TM4C123G Version

The current TM4C123G implementation revisits the original university project using the TivaWare Driver Library and current development tools.

[View the TM4C123G Traffic Intersection Project](PASTE-TM4C123G-REPOSITORY-URL-HERE)

## Project History

The traffic-controller project progressed through three implementations:

1. **Original TM4C123G version** – University laboratory assignment implemented using direct register-level programming and hexadecimal register values.
2. **Arduino Uno port** – Traffic-controller logic adapted to the Arduino platform.
3. **TivaWare TM4C123G version** – Recent reimplementation of the original TM4C123G project using the TivaWare Driver Library.

## Project Purpose

This Arduino port demonstrates experience with:

- Arduino programming
- Embedded C/C++
- Digital inputs and outputs
- Embedded control logic
- Breadboard circuit construction
- Hardware testing
- Adapting an embedded application to another microcontroller platform