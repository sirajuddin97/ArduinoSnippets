// skrevet av joakim @ hsn
const int ledPin = 13;
const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int buzzer = 10;
int tastetKode[2];
int riktigKode[] = {1, 2};

volatile int antallTasterTrykket = 0;       //volatile int i = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buzzer, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(buttonPin1), knappFunk1, RISING);
  attachInterrupt(digitalPinToInterrupt(buttonPin2), knappFunk2, RISING);
  Serial.begin(9600);
}

void loop() {
  Serial.println(antallTasterTrykket);

  if (antallTasterTrykket == 2) {
    boolean riktig = true;
    for (int i = 0; i < 2; i++) {

      if (tastetKode[i] != riktigKode[i]) {
        riktig = false;
      }
    }
    if (riktig == true) {
      digitalWrite(ledPin, HIGH);
    }
    else {
      tone(buzzer, 1000);
    }
    delay(1000);
    noTone(buzzer);
    digitalWrite(ledPin, LOW);
    antallTasterTrykket = 0;
  }

}

void knappFunk1() {
  if ( antallTasterTrykket < 2) {
    tastetKode[antallTasterTrykket] = 1;
    antallTasterTrykket ++;
  }
}
void knappFunk2() {
  if ( antallTasterTrykket < 2) {
    tastetKode[antallTasterTrykket] = 2;
    antallTasterTrykket ++;
  }
}
