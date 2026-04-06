Qn.Build a circuit with LED and pushbutton that tests your reaction speed.

Reaction Speed using Pushbuttons

Initially, I set up the LED as an output and the pushbutton as an
input using pinMode(), enabling the internal pull-up resistor. Then, 
I used random() to introduce a delay before the LED turns on using 
digitalWrite(). Once the LED glows, I recorded the starting time using
millis(). I continuously checked the button state using digitalRead(),
and when the button was pressed, I calculated the reaction time. Finally,
I displayed the result in the Serial Monitor using Serial.print().

Simulation Link:
https://www.tinkercad.com/things/3MaXcAE50Wg/editel?returnTo=%2Fdashboard&sharecode=ZYvlRNJWhVaO-ZjBPvUKgkbY_vCHsLMC_jzk-paFcKM
