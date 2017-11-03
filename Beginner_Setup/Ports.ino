void setup() {
  // Samme som pinMode OUTPUT for alle pinnene i port C:
  DDRC = B11111111;
}

void loop() {
  // Lyse alle LED i port C:
  PORTC = B11111111;

  // Eller lyse annenhver LED i port C:
  PORTC = B01010101;
}
