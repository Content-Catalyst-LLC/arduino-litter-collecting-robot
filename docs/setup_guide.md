# Setup Guide

## Purpose

This guide explains how to assemble and test the Arduino Litter Collecting Robot prototype.

## Wiring Overview

### Motor Driver (L298N)

- IN1 → Arduino pin 8
- IN2 → Arduino pin 9
- IN3 → Arduino pin 10
- IN4 → Arduino pin 11
- ENA → PWM pin 5 if used
- ENB → PWM pin 6 if used

### Ultrasonic Sensor

- VCC → 5V
- GND → GND
- Trig → pin 12
- Echo → pin 13

### Servo Gripper

- Signal → pin 3
- Power → 5V
- Ground → GND

## Build Steps

1. Assemble the robot chassis and install the two DC motors
2. Connect the motors to the L298N motor driver
3. Wire the ultrasonic sensor to the Arduino
4. Attach the servo and gripper assembly
5. Upload `litter_collecting_robot.ino`
6. Open the Serial Monitor at `9600` baud
7. Test forward motion, stop behavior, and gripper action

## Validation

Before relying on the prototype, verify:

- motors rotate in the intended directions
- ultrasonic readings are stable
- servo opens and closes consistently
- battery voltage remains stable during motor and servo activity
