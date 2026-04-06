Automatic Night Lamp (LDR):

1.What the project does and why I chose it?

This project automatically turns an LED ON in darkness 
and OFF in bright light using a photoresistor (LDR). 
I chose this project because it is a simple yet practical application of sensors.

Components used:

1.Arduino Uno – Acts as the microcontroller to process input and control output  
2.Photoresistor (LDR) – Detects light intensity (sensor)
3.resistor1 – Forms a voltage divider with the LDR, This is of 10k Ohm, I used online sources to figure out the values of resistances
4.LED – Acts as the output device
5.resistor2 – Limits current to protect the LED (220 Ohm)
6.Breadboard

Working:

The LDR and resistor form a voltage divider circuit connected to analog pin A0.  
->In bright light, LDR resistance is low, resulting in a low analog value  
->In darkness, LDR resistance is high, resulting in a high analog value  
The Arduino reads this value and compares it with a threshold. If the value 
is above the threshold (dark condition), the LED turns ON, otherwise, it remains OFF.

Challenges faced and how I solved them?

Initially, I faced difficulty in choosing the correct threshold value
for detecting darkness.Arduino gives range from 0 to 1023 as LDR range.
Since the values ranged approximately between lower values in light and
higher values in darkness, I selected a midpoint(approximately 500) to reliably distinguish between the two.

Simulation Link:

https://www.tinkercad.com/things/jqQvhSvTBy9-ldrec25i2009?sharecode=3Q2KtvN8BJro2_zGO05eGOKMtjt_8eWDrJqSnX6WSIY
