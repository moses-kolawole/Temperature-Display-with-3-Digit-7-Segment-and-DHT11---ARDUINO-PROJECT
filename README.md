# Temperature Display with 3-Digit 7-Segment and DHT11 - ARDUINO PROJECT

## Overview
This project displays real-time ambient temperature measured using a DHT11 sensor on a 3-digit 7-segment display. The temperature value is shown with one decimal point by multiplexing the display digits, providing a clear numeric output without using an LCD.

## Objective
- Learn how to interface a DHT11 temperature sensor with Arduino  
- Convert floating-point temperature values into displayable digits  
- Control a multi-digit 7-segment display using multiplexing  
- Display decimal values using a decimal point LED  
- Strengthen understanding of sensor-to-display data flow  

## Components Used
- Arduino Uno  
- DHT11 Temperature Sensor  
- 3-Digit 7-Segment Display  
- 220Ω resistors  
- Breadboard  
- Jumper wires  
- 9V Battery  
- 9V Battery Clip to DC Barrel Jack  

## Circuit Diagram
![Circuit Diagram](images/temperature_display_project_photo1.jpg)

## How It Works
1. The DHT11 sensor reads the ambient temperature as a floating-point value.
2. The temperature is multiplied by 10 to preserve one decimal place and converted to an integer.
3. Individual digits (units, tens, hundreds) are extracted using modulo and division operations.
4. Each digit is displayed on one of the three 7-segment displays using multiplexing.
5. The decimal point is enabled on the middle display to represent the fractional part.
6. The display refreshes rapidly to give the appearance of a steady temperature reading.
7. Temperature values are also printed to the Serial Monitor for debugging and verification.

## Code
The Arduino sketch for this project is located in the [code/ directory](code/temperature_display_project_on_22nd_october_2025.ino).

## Demo Video
A demonstration video showing the working project is included in this repository.

📹 **Project Demonstration:**  
[Click here to watch/download the demo video](video/)

*(If the video does not preview directly on GitHub, please download it using the link above.)*

## Reflection (What I Learned)
- Interfacing and reading data from a DHT11 sensor  
- Handling floating-point data for numeric displays  
- Multiplexing multi-digit 7-segment displays  
- Displaying decimal values without an LCD  

## Challenges Faced
- Managing flicker during multiplexing  
- Correctly placing the decimal point  
- Converting sensor readings into stable display values  

## Possible Improvements
- Add humidity display using additional digits  
- Replace delay-based multiplexing with `millis()`  
- Add temperature unit indicator (°C / °F)  
- Use a shift register to reduce pin usage  

## Project Status
Completed







