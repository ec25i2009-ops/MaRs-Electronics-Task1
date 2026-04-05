int potPin = A0;
int redPin = 9;
int greenPin = 10;
int bluePin = 11;
int ledPin = 6;
int ledState = LOW;
unsigned long prevTime = 0;
void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}
void loop() {
  int potValue = analogRead(potPin);
  int redValue = map(potValue, 0, 1023, 0, 255);
  int greenValue = map(potValue, 0, 1023, 255, 0);
  int blueValue = map(potValue, 0, 1023, 100, 255);
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
  int delayTime = map(potValue, 0, 1023, 100, 1000);
  unsigned long currentTime = millis();
  if (currentTime - prevTime >= delayTime) {
    prevTime = currentTime;
    ledState = !ledState;
    digitalWrite(ledPin, ledState);
  }
}
