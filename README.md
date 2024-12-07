# Brushless-Motor-Test-for-WCR

Overview:

This repository documents the results and methodology of a test conducted to analyze the thrust and throttle requirements for a wall-climbing robot. 
The experiment explores the relationship between throttle input and thrust output, as well as the required thrust to keep the robot static at specific angles. 
The findings aim to aid in optimizing the performance and control of propeller-driven wall-climbing robots.

Project Details

Experiment Objectives:

Throttle vs. Thrust Relationship: Establish a linear relationship between throttle input and thrust output.
Thrust vs. Angle: Calculate the thrust required to maintain stability at various inclination angles (T=W⋅cos(θ)).
Dynamic Control: Use findings to derive the throttle needed to achieve specific thrust levels at given angles.

Experiment Setup

Robot Specifications:

Weight (W): 650 g.
Thrust Mechanism:
6-inch, 3-blade propeller.
50A ESC.
Powered by a 3-cell, 3200 mAh LiPo battery (35C).
Components:

Thrust Measurement: Digital scale.
RPM Measurement: IR sensor connected to Arduino.
Throttle Control: FlySky transmitter and receiver.

