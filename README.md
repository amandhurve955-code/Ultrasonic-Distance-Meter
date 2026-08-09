# Ultrasonic-Distance-Meter
An Arduino Uno and HC-SR04 sensor measure object distance without physical contact.  The system emits 40 kHz sound waves and tracks echo time-of-flight.  Distance is calculated using sound speed and displayed live on a 16x2 LCD.  An onboard potentiometer controls screen contrast for clear real-time reading.

**Name:** AMAN DHURVE  
**Company:** CODTECH IT SOLUTIONS  
**ID:** CITS6427  
**Domain:** EMBEDDED SYSTEM  
**No. of Weeks:** 6 WEEKS  

## Overview
The **Ultrasonic Distance Meter** is an embedded system project that measures the distance to a target object without physical contact using an HC-SR04 ultrasonic sensor and displays live readings on a 16x2 LCD screen in both centimeters and inches.

## Circuit Diagram
<img width="1137" height="968" alt="Circuit Diagram 3" src="https://github.com/user-attachments/assets/ea8c4f65-630f-44e4-af19-11db51a120cb" />


## Features
* **Non-Contact Measurement:** Accurately measures distances ranging from 2 cm to 400 cm.
* **Dual Unit Output:** Real-time LCD display showing readings in centimeters ($\text{cm}$) and inches ($\text{in}$).
* **Adjustable Contrast:** Manual screen clarity control using an integrated potentiometer.
* **Efficient Wiring:** 16x2 LCD interfaced in 4-bit data mode to conserve GPIO pins.

## Components Used
* **Arduino Uno R3** (Microcontroller Board)
* **HC-SR04 Ultrasonic Sensor**
* **16x2 Character LCD Display**
* **10kΩ Potentiometer** (Contrast Control)
* **220Ω Resistor** (Backlight Protection)
* **Breadboard & Jumper Wires**
* **USB Cable** (Power Supply and Sketch Programming)
  
## Technologies Used
* **Embedded C++ / Arduino Language**
* **Arduino IDE** (Firmware Compilation & Uploading)
* **Tinkercad Circuits / Proteus** (Circuit Simulation)
* **LiquidCrystal Library**

## Working Principle
1. **Triggering:** Arduino sends a $10\,\mu\text{s}$ pulse to the sensor's `Trig` pin to emit a 40 kHz sound wave.
2. **Echo Capture:** Wave reflects off an obstacle, driving the `Echo` pin HIGH for the round-trip duration ($\Delta t$).
3. **Calculation:** Arduino computes distance using the speed of sound ($0.0343\text{ cm/}\mu\text{s}$):
   $$\text{Distance (cm)} = \frac{\Delta t \times 0.0343}{2}$$
4. **Display:** Real-time distance output is sent directly to the 16x2 LCD screen.

## Skills Demonstrated
* Time-of-flight acoustic sensor signal processing.
* Microsecond pulse width measurement (`pulseIn()`).
* 4-bit parallel interfacing of character LCD displays.
* Embedded circuit prototyping and debugging.

## Applications
* Vehicle reverse parking assistants and obstacle detection.
* Robotic autonomous obstacle avoidance systems.
* Industrial tank liquid level monitoring.

## Future Improvements
* Addition of a piezo buzzer for distance-based audio warning alerts.
* Integration of an I2C adapter module to reduce LCD wiring to 2 pins.
* Temperature compensation using a sensor (e.g., TMP36) for higher sound-speed accuracy.

## Skills Gained
* Hands-on experience with ultrasonic sensor hardware timing logic.
* Mastery of interfacing display peripherals with Arduino.
* Hardware-software co-design in embedded C++.
