Qn.Build a circuit with 3 LEDs, where the LEDs blink at time intervals of
500ms,1000ms,1500ms.

Blinking LEDs with Different Time Intervals

I started with limited prior knowledge, so I explored basic Arduino concepts 
through YouTube and AI tools. Initially, I used delay() to control blinking, but noticed
that the LEDs were not blinking independently, since delay() blocks the execution of the program.
To solve this, I used millis() to implement non-blocking timing. I stored separate previous time 
values for each LED and compared them with the current time using millis(). Whenever the time 
difference exceeded the required interval (500ms, 1000ms, 1500ms), I toggled the respective LED state.
This approach allowed all LEDs to blink simultaneously at different rates, and helped me understand how 
non-blocking code works in real-time systems.

Simulation Link:
https://www.tinkercad.com/things/cLuRIgmTKX2-blinkingled-ec25i2009?sharecode=ajaEvXy9IQtkQRBlCJ-mspRkXBUFaN5AESFOO7p7aGg
