void setup() {
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  // XOR gate: the LED will turn on only if either pin 8 or 7 is HIGH.
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
}
