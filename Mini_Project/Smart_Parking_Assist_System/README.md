Smart Parking Assist System


What the project does and why I chose it?

This project helps in parking assistance by detecting the distance 
between a vehicle and an obstacle using an ultrasonic sensor.
I chose this project because I have often seen my father struggle while parking,
so I thought that an idea like this would help them detect objects while parking.

Components used:

1. Arduino Uno – Controls the system  
2. Ultrasonic Sensor (HC-SR04) – Measures distance
3. LEDs (Red, Yellow, Green) – Indicate proximity levels  
4. Resistors – Protect LEDs  
5. Breadboard  

Working:

The ultrasonic sensor sends a sound wave and measures the time taken for the echo to return. This time is used to calculate distance.
Based on the distance:
- Green LED → Safe distance  
- Yellow LED → Moderate distance  
- Red LED → Very close  
If the Object is extremely close, then the RED LED starts to blink.

Challenges faced and how I solved them?

This was overall an easy project and I didn't face much difficulty.
If I have to mention then initially, I faced issues with incorrect distance readings.
I resolved this by properly timing the trigger pulse and ensuring correct calculation using the speed of sound formula.

Simulation Link:

https://www.tinkercad.com/things/2TIw0NVwE8q-smartparking-ec25i2009?sharecode=szgJ3lHvFJpDyCx-vzziXAbV3KDlV01PUG9k2fuo1Ig
