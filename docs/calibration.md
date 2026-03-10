# Calibration Guide

## Why Calibration Matters

This prototype uses proximity as a proxy for object presence. Performance depends on:

- ultrasonic sensor angle and placement
- gripper geometry
- chassis speed
- target size and reflectivity
- surface conditions

## Practical Calibration Notes

1. Measure the effective object-detection distance
2. Tune the collection threshold in code
3. Verify that the robot stops early enough for the gripper to engage
4. Test with different lightweight objects such as bottles or paper debris
5. Adjust gripper angle and servo travel if collection fails repeatedly

## Notes

This prototype does not classify litter. It only detects nearby objects and attempts collection based on distance threshold logic.
