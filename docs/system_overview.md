# System Overview

The proposed system is a microcontroller-based 3-phase motor protection and control unit designed for industrial and agricultural applications. It ensures safe and reliable motor operation by continuously monitoring key electrical parameters and detecting abnormal conditions.

The system consists of multiple sensing units that measure parameters such as phase sequence, voltage levels, and motor current. These inputs are processed by an Arduino-based control unit, which analyzes the real-time data and compares it with predefined safety thresholds.

In the event of fault conditions such as reverse phase, single phasing, or dry run, the controller immediately activates a relay mechanism to disconnect the motor, preventing potential damage and system failure.

Additionally, the system integrates a GSM800L communication module, enabling remote monitoring and control. Users receive real-time SMS notifications regarding motor status and fault conditions. The system also allows remote ON/OFF control of the motor, improving operational flexibility and reducing the need for manual intervention.

Overall, the system combines sensing, control, and communication modules to provide a reliable, automated, and user-friendly motor protection solution.
