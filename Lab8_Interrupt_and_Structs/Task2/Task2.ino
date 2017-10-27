// DFDP1100-1 17H Digitale systemer og programmering | Lab 8, Oppgave 2:
const int led = 3;
const int button = 2;
volatile int ledBlink = 1000;

void setup(){
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);

  attachInterrupt(digitalPinToInterrupt(button), changeDelay, RISING);
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

void changeDelay(){
  if(ledBlink >= 200){
    ledBlink = ledBlink - 100;
  }
  else{
    Serial.println("Delay kan ikke være lavere 0. Delay settes tilbake til 1000.");
    ledBlink = 1000;
  }
}

