# Arduino Litter Collecting Robot

An Arduino-based litter-collecting robot for environmental cleanup experiments with reproducible firmware, robotics documentation, and sustainability-oriented prototype design.

This project is designed as a reproducible prototype for engineers, students, and researchers interested in environmental robotics, embedded systems, and low-cost cleanup automation.

## Overview

The robot combines mobility, proximity sensing, and a simple gripper mechanism to detect nearby objects and attempt lightweight litter collection.

At a systems level, the architecture can be summarized as:

Ultrasonic Sensor → Arduino → Navigation Logic → Motor Driver / Servo → Robot Motion and Gripper Action

## Features

- differential-drive robot mobility
- ultrasonic proximity sensing
- servo-actuated gripper
- simple perception-action control loop
- extensible for object recognition, logging, or route planning

## Repository Structure

- `firmware/` — Arduino control firmware
- `docs/` — setup, calibration, and deployment documentation
- `data/` — example distance and action logs
- `hardware/` — wiring diagrams and schematics
- `BOM.csv` — bill of materials

## Notes

This is a prototype reference design, not a field-ready cleanup robot. Engineers adapting it for more realistic deployment should validate terrain handling, battery endurance, gripper reliability, obstacle discrimination, and control stability.

## License

This project is released under the MIT License.

See `LICENSE` for details.
