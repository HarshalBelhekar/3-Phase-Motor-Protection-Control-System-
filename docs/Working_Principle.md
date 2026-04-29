# Working Principle

The 3-Phase Motor Protection and Control System operates by continuously monitoring electrical parameters and taking automated decisions to ensure safe motor operation.

The system uses sensing circuits to measure phase voltage, current, and phase sequence of the 3-phase supply. These analog signals are fed to the microcontroller, where they are processed and compared against predefined safe operating limits.

Under normal operating conditions, when all parameters are within acceptable ranges, the microcontroller keeps the relay activated, allowing the motor to run.

When a fault condition is detected, the system responds as follows:

* **Reverse Phase Detection:** The system identifies incorrect phase sequence and prevents motor operation to avoid reverse rotation.
* **Single Phasing:** If one of the phases is lost, the system detects the imbalance and immediately disconnects the motor.
* **Dry Run Condition:** By analyzing current consumption, the system detects low-load conditions (such as absence of water in pumps) and turns off the motor to prevent damage.

Once a fault is detected, the microcontroller deactivates the relay, thereby cutting off the power supply to the motor.

In addition to protection, the system incorporates a GSM800L module for communication. It sends SMS alerts to the user regarding motor status and fault conditions. The user can also control the motor remotely (ON/OFF) through predefined SMS commands.

When normal conditions are restored, the system can either automatically restart the motor or wait for user intervention, depending on the control logic implemented.

Overall, the system ensures reliable, automated, and remote-controlled protection of 3-phase motors.
