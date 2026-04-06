Qn.Build a circuit with LED and pushbutton that tests your reaction speed.

Reaction Time Tester

In this task, I built a system to measure reaction time using an LED and a pushbutton.
The LED turns ON after a random delay using the random() function, ensuring that the user
cannot predict when it will light up. Once the LED turns ON, I record the start time using
millis(). When the pushbutton is pressed, I capture the current time and calculate the reaction
time as the difference between the two values.I used INPUT_PULLUP mode for the button to ensure 
stable input readings and avoid floating values. The calculated reaction time is then displayed on the Serial Monitor.
This task helped me understand event-based timing, user interaction, and practical use of millis() in real-time measurement.

Simulation Link:

https://www.tinkercad.com/things/3MaXcAE50Wg-responsespeed-ec25i2009?sharecode=5_M_f2Mx0Anrr6gOspYUJN62qjdknRsZBMbphj6OCrI
