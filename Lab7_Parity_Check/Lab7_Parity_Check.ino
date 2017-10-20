// DFDP1100-1 17H Digitale systemer og programmering | Lab 7, Oppgave 2:

void setup(){
  int yellowPin = 8;
  int redPin = 7;
  int bluePin = 6;

  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop(){
  digitalWrite(yellowPin, HIGH);
  digitalWrite(redPin, HIGH);
  digitalWrite(bluePin, HIGH);
}
