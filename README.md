

---

# Smart Room Automation System

## Project Overview

This Smart Room Automation System is designed to enhance convenience, energy efficiency, and comfort within a living space. The system utilizes various sensors to detect motion, monitor temperature, and identify moisture levels, enabling automated responses for lighting, window control, and rain protection. The project combines Object Detection, Window Control, and Rain Protection to create a smarter, eco-friendly living environment.

## Features

### 1. Object Detection
- **Technology Used:** PIR (Passive Infrared) Sensor
- **Functionality:** Detects human presence in the room to control lighting.
- **Operational Mechanism:**
  - **Entry Detection:** Turns lights on when a person enters.
  - **Exit Detection:** Turns lights off when the room is unoccupied.
- **Benefits:**
  - **Energy Efficiency:** Minimizes unnecessary power usage by switching off lights when not in use.
  - **Convenience:** Provides automatic control, eliminating the need for manual switching.

### 2. Window Control
- **Technology Used:** Temperature Sensors
- **Functionality:** Monitors room temperature to optimize indoor comfort.
- **Operational Mechanism:**
  - **Opening Windows:** If internal temperatures are low, windows open for fresh air circulation.
  - **Closing Windows:** When external temperatures rise, windows close to prevent overheating.
- **Benefits:**
  - **Comfort:** Automatically maintains a comfortable indoor environment.
  - **Energy Conservation:** Utilizes natural ventilation to reduce dependence on heating/cooling systems.

### 3. Rain Protection
- **Technology Used:** Moisture Sensor
- **Functionality:** Detects rain and responds by automatically closing windows.
- **Operational Mechanism:**
  - **Rain Detection:** Closes windows to protect against moisture infiltration.
- **Benefits:**
  - **Safety:** Prevents water damage to interiors.
  - **Maintenance Reduction:** Reduces the need for repairs related to moisture damage.

## Additional Features
- **User Interface:** Can be integrated with a mobile app or control panel for manual overrides and monitoring.
- **Integration with Smart Devices:** Compatible with other smart home devices, like thermostats and security systems, to create a unified smart home ecosystem.
- **Data Analytics:** Collects data on usage patterns, enabling further optimization for energy savings and improved user comfort.

## Hardware Requirements
- **Microcontroller:** Arduino Uno
- **Sensors:** PIR Sensor, Temperature Sensor, Moisture Sensor
- **Other Components:** LED, Buzzer, Relay, Breadboard, Jumper Wires, Motor for window control

## Software Requirements
- **Programming Language:** C/C++ (Arduino IDE)
- **Libraries:** `DHT.h` for temperature, `Servo.h` for window control

## Setup and Installation
1. **Connect the Hardware:** Assemble the circuit by connecting the sensors and actuators to the Arduino as shown in the circuit diagrams.
2. **Upload the Code:** Load the code onto the Arduino board using the Arduino IDE.
3. **Run the System:** Power the Arduino and observe the automation system as it responds to environmental changes.

## How to Use
1. **Automatic Mode:** The system will operate autonomously, responding to motion, temperature, and moisture conditions.
2. **Manual Mode:** Use the mobile app or control panel to manually control the lighting, window positions, and other functions.


## Contributing
Feel free to submit issues, feature requests, or pull requests. Your contributions are highly appreciated.

## License
This project is open-source under the MIT License.

