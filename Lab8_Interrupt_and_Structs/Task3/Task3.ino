// DFDP1100-1 17H Digitale systemer og programmering | Lab 8, Oppgave 3:
const int led = 7;
const int redButton = 2;
const int blueButton = 3;
volatile int ledBlink = 1000;

void setup(){
  pinMode(led, OUTPUT);
  pinMode(redButton, INPUT);
  pinMode(blueButton, INPUT);

  attachInterrupt(digitalPinToInterrupt(redButton), increaseDelay, RISING);
  attachInterrupt(digitalPinToInterrupt(blueButton), decreaseDelay, RISING);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(led, HIGH);
  delay(ledBlink);
  digitalWrite(led, LOW);
  delay(ledBlink);
  
  Serial.print("Delay: ");
  Serial.println(ledBlink);
}

void increaseDelay(){
  if(ledBlink > 0 && ledBlink < 1000){
    ledBlink = ledBlink + 100;
  }
  else{
    Serial.println("Max delay er 1000. Trykk på den blå knappen!");
  }
}

void decreaseDelay(){
  if(ledBlink >= 200){
    ledBlink = ledBlink - 100;
  }
  else{
    Serial.println("Delay kan ikke være lavere 0. Trykk på den røde knappen!");
  }
}

