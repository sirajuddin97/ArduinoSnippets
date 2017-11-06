void setup() {
  // Samme som pinMode OUTPUT for alle pinnene i port C:
  DDRC = B11111111;

  // Kun bruke noen av portene:
  DDRH = DDRH & B100000111; // her brukes den første og de tre siste portene
}

void loop() {
  // Lyse alle LED i port C:
  PORTC = B11111111;

  // Eller lyse annenhver LED i port C:
  PORTC = B01010101;

  // Alternativ måte:
  byte b1 = 7;
  PORTC = b1;

  // Binær teller:
  for(int i = 0; i < 256; i++){
    PORTC = i;
    delay(200);
  }

  // To tall sammenlignes med OR (der en av dem er HIGH) - en slags sannhetstabell:
  byte b1 = B10101010;
  byte b2 = B00001111;
  PORTC = b1 | b2;

  // Eller med AND (hvor begge må være HIGH):
  PORTC = b1 & b2;

  // XOR:
  PORTC = b1 ^ b2;

  // Invert av b1 og b2 (NAND):
  PORTC = ~(b1 & b2);

  // Med denne koden vil kun den første og tre siste LED lyse:
  PORTC = PINH;

  // Flytte alle bits tre plasser til høyre (dvs f.eks 00110000 -> 00000110):
  PORTC = PINH >> 3;

  static byte b1 = 1;
  PORTC = b1;
  b1 = b1 << 1:
}


