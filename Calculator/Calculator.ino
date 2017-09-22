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
  Serial.print(tall1);
  Serial.print(" + ");
  Serial.print(tall2);
  Serial.print(" = ");
  Serial.println(svar);
  //Serial.println(svar, BIN); // Binary number
}

