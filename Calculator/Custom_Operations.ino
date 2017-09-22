void setup() {
  Serial.begin(9600);
}

void loop() {
  int tall1, tall2, svar;
  char op;
  
  Serial.println("Skriv inn et regnestykke");

  while(Serial.available() == 0){} // Pause
  tall1 = Serial.parseInt();

  op = Serial.read();
  
  while(Serial.available() == 0){} // Pause
  tall2 = Serial.parseInt();

  svar = regnUt(tall1, tall2, op);  
}

int regnUt(int t1, int t2, char op) {
  int svar;

  if(op == '+') {
    svar = t1 + t2;
    skrivUt(t1, t2, svar, '+');
  }
  else if(op == '-') {
    svar = t1 - t2;
    skrivUt(t1, t2, svar, '-');
  }
  else
  {
    Serial.println("Kun pluss eller minus!");
  }
  return svar;
}

void skrivUt(int tall1, int tall2, int svar, char op) {
  Serial.print(tall1);
  Serial.print(" ");
  Serial.print(op);
  Serial.print(" ");
  Serial.print(tall2);
  Serial.print(" = ");
  Serial.println(svar);
}

