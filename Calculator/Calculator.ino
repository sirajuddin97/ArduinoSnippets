void setup() {
  Serial.begin(9600);
}

void loop() {
  int tall1, tall2, svar;
  Serial.println("Skriv inn to heltall");
  tall1 = Serial.parseInt();
  Serial.println(tall1);
}
