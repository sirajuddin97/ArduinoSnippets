void setup() {
  Serial.begin(9600);
}

void loop() {
  int tall1, tall2, svar;
  Serial.println("Skriv inn to heltall");

  while(Serial.available() == 0){} // Pause
  tall1 = Serial.parseInt();
  
  while(Serial.available() == 0){} // Pause
  tall2 = Serial.parseInt();

  svar = tall1 + tall2;
  skrivUt(tall1, tall2, tall3);
}

int regnUt(int t1, int t2) {
  int svar = t1 + t2;
  return svar;
}

void skrivUt(int tall1, int tall2, int tall3) {
  Serial.print(tall1);
  Serial.print(" + ");
  Serial.print(tall2);
  Serial.print(" = ");
  Serial.println(svar);
}

