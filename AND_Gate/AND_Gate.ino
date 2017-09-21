void setup() {
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  // AND gate: the LED will turn on only if pin 8 and 7 are both HIGH
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
}
