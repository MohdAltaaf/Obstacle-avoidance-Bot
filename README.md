# Obstacle-Avoidance Robot

## What it does
Autonomous robot that detects obstacles using HC-SR04 ultrasonic 
sensor and navigates around them automatically.

## Hardware Used
- Arduino Uno
- L298N motor driver
- HC-SR04 ultrasonic sensor (x3)
- 2x DC motors
- 11.1V 2200mAh Li-ion battery pack
- Custom PVA foam chassis (zero glue - precision cut slots)

## How it works
1. Ultrasonic sensor fires sound pulses every 100ms
2. If obstacle detected under 25cm → stop → reverse → turn left
3. If path clear → move forward
4. If sensor times out → stop and wait (prevents runaway)

## Key functions
- ShootDemRays() → triggers ultrasonic pulse
- moveForward() / moveBackward() → motor control
- TurnLeft() / TurnRight() → navigation
- STOP() → safety stop

## What I learned
- Hardware debugging (loose wires cause sensor failures)
- Power supply importance (9V insufficient for dual motors)
- Writing Arduino C++ from scratch without tutorials
- Systematic debugging methodology

## Status
Power supply issue being resolved (Li-ion charger arriving June 4).
Demo video coming soon.

## Built by
Mohd Altaaf | Pre-DTU ECE | June 2026
