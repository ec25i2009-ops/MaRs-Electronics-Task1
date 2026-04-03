unsigned long prev1 = 0;
unsigned long prev2 = 0;
unsigned long prev3 = 0;

bool state1 = LOW;
bool state2 = LOW;
bool state3 = LOW;

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  unsigned long current = millis();

  if (current - prev1 >= 500) {
    prev1 = current;
    state1 = !state1;
    digitalWrite(2, state1);
  }

  if (current - prev2 >= 1000) {
    prev2 = current;
    state2 = !state2;
    digitalWrite(3, state2);
  }

  if (current - prev3 >= 1500) {
    prev3 = current;
    state3 = !state3;
    digitalWrite(4, state3);
  }
}
