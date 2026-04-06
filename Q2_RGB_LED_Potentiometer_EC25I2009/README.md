Qn2. Controlling colour of RGB LED and blinking speed of an
other LED with potentiometer

RGB LED Control using Potentiometer:

For this task, I used a potentiometer as an input device to control both 
the colour of an RGB LED and the blinking speed of another LED. I read the analog 
value (0–1023) using analogRead() and mapped it to a suitable range (0–255) using the map() function.
The mapped values were applied to the RGB LED using analogWrite() on PWM pins,
which allowed smooth variation of colour by controlling the intensity of red, 
green, and blue channels. At the same time, I used the potentiometer value to 
dynamically adjust the blinking delay of another LED.
This helped me understand how analog inputs can be used to control multiple outputs,
and how PWM simulates analog behaviour using digital signals.

Simulation Link:

https://www.tinkercad.com/things/bQDFHniuLvF-potentiometerec25i2009?sharecode=1nL3dNA2faWj-hi2SnuZHgvNN49LneQjUsvAir_tK9M
