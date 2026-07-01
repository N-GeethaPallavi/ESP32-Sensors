# ESP32 Soil Moisture Sensor

## Overview

This project demonstrates soil moisture monitoring using the ESP32 and an analog soil moisture sensor. The ESP32 continuously reads the sensor value, determines the soil condition, and indicates the result through the Serial Monitor and the built-in LED.

---

## Description

The ESP32 reads analog values from the soil moisture sensor using its ADC. Based on predefined threshold values, the soil condition is classified as:

- Dry Soil
- Moist Soil
- Wet Soil

When the soil is detected as **Wet**, the built-in LED blinks as an indication.

---

## Components Used

- ESP32 Development Board
- Soil Moisture Sensor
- Breadboard
- Jumper Wires

---

## Working

1. The ESP32 reads the analog value from the soil moisture sensor.
2. The sensor value is displayed on the Serial Monitor.
3. The soil condition is determined based on threshold values:
   - **Above 3500** → Dry Soil
   - **1501–3500** → Moist Soil
   - **1500 or below** → Wet Soil
4. When the soil is wet, the built-in LED blinks automatically.
5. Watch the implementation here: https://drive.google.com/file/d/13MjZxtnp1zE1ZMoQB7MdYBej_9wzgNKa/view?usp=sharing

---

## Concepts Covered

- Analog-to-Digital Conversion (ADC)
- Analog Sensor Interfacing
- Conditional Statements
- GPIO Output Control
- Serial Communication

---

## Applications

- Smart Irrigation Systems
- Plant Monitoring
- Agriculture Automation
- Home Gardening
- IoT-Based Farming

---

## Software Used

- Arduino IDE
- ESP32 Board Package

---


## Author

**Geetha Pallavi**  
B.Tech (ECE) 


---


# ESP32 Touch Sensor Buzzer

## Overview

This project demonstrates the use of the ESP32's built-in capacitive touch sensor to control a buzzer. When the touch sensor is activated, the ESP32 detects the touch input and turns the buzzer ON for a short duration, providing an audible indication.

---

## Description

The ESP32 features built-in capacitive touch sensing pins that can detect human touch without requiring an external touch sensor module. This project reads the touch input and activates a buzzer whenever the touch sensor is triggered.

---

## Components Used

- ESP32 
- Active Buzzer
- Jumper Wires
- Breadboard 

---

## Working

1. The ESP32 continuously monitors the built-in capacitive touch sensor.
2. When a touch is detected, the ESP32 identifies the input.
3. The buzzer is turned ON for 500 ms.
4. The buzzer is then turned OFF for 500 ms.
5. This process repeats whenever a touch is detected.
6. Watch implementation here: https://drive.google.com/file/d/1TmLdbiuTxZpAP7-LCvG1gLUWAYrM38UN/view?usp=sharing

---

## Concepts Covered

- Capacitive Touch Sensing
- Digital Input Processing
- GPIO Output Control
- Embedded Systems Programming

---

## Applications

- Touch-Based Doorbells
- Touch-Activated Alarms
- Human-Machine Interfaces (HMI)
- Smart Home Controls
- Touch-Controlled Embedded Devices

---

## Software Used

- Arduino IDE
- ESP32 Board Package

---


## Author

**Geetha Pallavi**  
B.Tech (ECE)

