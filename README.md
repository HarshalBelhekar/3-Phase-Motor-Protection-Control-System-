# 3-Phase Motor Protection & Control System

## Overview

Microcontroller-based system designed to protect and control a 3-phase motor by monitoring electrical parameters and detecting fault conditions such as reverse phase, single phasing, and dry run.

The system ensures safe motor operation by automatically disconnecting the load during abnormal conditions and provides remote monitoring and control using a GSM module.



## Key Features

* Phase failure and reverse phase detection
* Dry run detection
* Automatic motor shutdown on fault
* GSM-based SMS alerts
* Remote motor ON/OFF control
* Real-time system monitoring



## System Architecture

* Sensor Layer → Voltage & current sensing
* Control Layer → Arduino-based decision logic
* Actuation Layer → Relay-controlled motor switching
* Communication Layer → GSM800L for remote alerts



## Working Principle

The system continuously monitors motor operating conditions using sensors. The microcontroller processes these inputs and compares them with predefined thresholds.

* Normal Condition → Motor runs
* Fault Detected → Relay disconnects motor
* GSM Module → Sends alert to user



## Repository Structure

* `src/` → Firmware code (simplified version)
* `docs/` → Detailed explanation of system
* `hardware/` → Circuit and components
* `images/` → Project visuals



## Note

This repository contains a **simplified firmware version** for demonstration.

Full implementation includes:

* Advanced GSM communication handling
* SMS command parsing
* EEPROM-based number management

For full code access, feel free to contact me.



## Tech Stack

* Embedded C / Arduino
* GSM800L
* Relay Control
* Sensor Integration


## Author

Harshal Belhekar

