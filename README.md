# Obstacle-Avoidance Robot
## Why?: 
So it started a month ago (early june), since my college course is going to be B.Tech in Electronics and communication engineering, i though i should get familiar with electronics✨.
This seemed to be the simple enough for my first project, but i didnt and still dont have money to buy components, so i just tried to make do with whatever i could find in my school lab (severely underfunded).

## What it does
Autonomous robot that detects obstacles using HC-SR04 ultrasonic 
sensor and navigates around them automatically.
But unlike what how most starter tutorials use a servo with the HC05 to sweep scan for obstacles, i didnt have a servo so i just decided on pivoting the whole robot to scan for obstacles.

## Hardware Used
- Arduino Uno
- L298N motor driver
- HC-SR04 ultrasonic sensor (x3)
- 2x DC motors
- My brothers phone charging powerback💔
- Custom PVA foam chassis (zero glue -  only cutted out slots for the components)

## How it works
1. Ultrasonic sensor fires sound pulses every 100ms
2. If obstacle detected under 25cm → stop → reverse → turn left
3. If path clear → move forward
4. If sensor times out → stop and wait (prevents runaway)
5. <img width="521" height="908" alt="uhm" src="https://github.com/user-attachments/assets/2890cb21-1d91-4dd5-8e79-49ef38112b0a" />
6. <img width="522" height="914" alt="backshot" src="https://github.com/user-attachments/assets/155563b3-212d-4dc5-bdce-b2b17f07b779" />
7. <img width="517" height="906" alt="Frontshot" src="https://github.com/user-attachments/assets/cdcbd94b-f008-4280-a953-fe2a40befd4f" />




## Key functions
- ShootDemRays() → triggers ultrasonic pulse
- moveForward() / moveBackward() → motor control
- TurnLeft() / TurnRight() → navigation
- STOP() → safety stop

## What I learned
- First off this was the first piece of code ive written myself i only read the arduino docs and an "arduino starters crash course". So its pretty cool how the code turned out to be fine.
- I learned the hard way that i should not plug my arduino into the laptop when its already being powered externally 💔. I was scolded so much for burning it.
- Learnt the importance of good quality jumper wires 😭 I was AT IT for 2-3 days wondering why my HC05 keeps giving wierd values only to find out the wires were bad 😭.
- Learnt how to make do with the stuff I have on myself.
- This got me started in electronics so i'd say it was a very useful experience.

## Videos:
- https://drive.google.com/drive/folders/11dgoV21HWf5E9fK-chv-nsAKugPyqb16?usp=drive_link
## Status
Power supply issue being resolved (Li-ion charger arriving June 4).
Demo video coming soon.

## Built by
Mohd Altaaf | Pre-DTU ECE | June 2026
