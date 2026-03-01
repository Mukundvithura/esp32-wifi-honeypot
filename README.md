# ESP32 Wi-Fi Security Research Honeypot

## Overview

This project implements a **Wi-Fi honeypot system using ESP32** designed for cybersecurity research and academic experimentation.

The system models a **Deterministic Finite Automaton (DFA)** to manage network interaction states including access point broadcasting, captive portal interaction, data capture, and session reset.

The honeypot simulates a public Wi-Fi network and records interaction metadata for analysis.

## Features

* ESP32 Wi-Fi Access Point
* Captive Portal Web Interface
* Password Capture Simulation
* Client IP Logging
* Finite State Machine (FSM) Architecture
* Event-Driven Embedded System Design

## Architecture

System layers include:

* External Environment Layer
* Wi-Fi Communication Layer
* FSM Control Engine
* Captive Portal Application Layer
* Logging & Data Collection Module

## System States (DFA)

INIT → AP_BROADCAST → CAPTIVE_PORTAL → DATA_CAPTURE → RESET

## Hardware

* ESP32 Development Board
* USB Cable
* Laptop / Arduino IDE

## Software

* Arduino IDE
* ESP32 Arduino Core
* WiFi.h
* WebServer.h

## Example Serial Output

```
System Booting
Initializing system
Access Point Started
SSID: Research_Free_WiFi
IP Address: 192.168.4.1
Captive portal started
```

## Ethical Notice

This system is intended **strictly for educational and cybersecurity research purposes**.
It should only be used in controlled laboratory environments.

## Author

Mukund Karthikeyan
