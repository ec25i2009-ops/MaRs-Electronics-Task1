const int ledPin = 13;
const int buttonPin = 2;
unsigned long startTime;
unsigned long reactionTime;
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
  randomSeed(analogRead(0));
  delay(random(2000, 5000));
  digitalWrite(ledPin, HIGH);
  startTime = millis();
  while (digitalRead(buttonPin) == HIGH) {
  }
  reactionTime = millis() - startTime;
  Serial.print("Reaction Time: ");
  Serial.print(reactionTime);
  Serial.println(" ms");
  digitalWrite(ledPin, LOW);
}
void loop() {
}
