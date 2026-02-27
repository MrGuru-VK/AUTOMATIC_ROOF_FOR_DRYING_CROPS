 Automated Roof System for Crop Drying

This project was inspired by a simple observation: farmers often carry their crops out into the sun to dry them — but what if we could bring the sun to the crops instead?

 Project Idea

One day, I noticed how much effort goes into moving crops to sun-dry them, only to rush them back under shelter when it rains. I thought: "what if the roof itself could open and close automatically based on weather conditions?" That’s when I decided to build this automated roof system.

 What It Does

The roof "opens" to allow sunlight to dry the crops.
When "rain is detected", the roof "closes automatically" to protect the crops.
Controlled using an "Arduino", "rain sensor module", and "two DC motors".
Fully automated — no manual intervention required!
 Components Used

Arduino (Uno/Nano/etc.)
Rain sensor module
2 x DC motors
Motor driver module (e.g., L298N)
Power supply (battery or adapter)
Supporting structure for the roof
Jumper wires
 How It Works

When no rain is detected, the Arduino activates the motors to "open the roof".
If rain is detected by the rain sensor, the Arduino immediately triggers the motors to "close the roof".
The logic ensures the system only responds when the state changes (i.e., doesn't repeatedly open/close).
 Files Included

roof_automation.txt – Arduino sketch
Circuit diagram
 Setup Instructions

Assemble the rain sensor and motor driver as per the circuit diagram.
Upload the Arduino code to the board.
Install the structure so that the motors can physically open/close the roof.
Test the system using water droplets to simulate rain.
 Benefits
Saves time and manual effort for farmers
Protects crops from unexpected rain
Promotes smarter agriculture through automation
 Future Improvements

Add solar panel integration for power
Connect to IoT for remote monitoring
Add temperature or humidity sensors for more control logic
 License

This project is shared for learning and innovation. Feel free to modify or expand it for your own use!

Smart farming starts with smart ideas! 🌱
