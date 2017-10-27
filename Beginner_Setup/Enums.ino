const int ledPin = 13;
const int buttonPin = 2;
int ledState = LOW;
const int interval = 1500;

enum possibleStates{
  off,
  blink,
  on
};
volatile possibleStates state = off;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(buttonPin), changeState, RISING);
}

void loop() {
  static unsigned long lastChange = 0;

  if(state == off){
    ledState = LOW;
  }
  else if(state == blink){
    if((millis() - lastChange) >= intervall){
      ledState = !ledState;
      lastChange = millis();
    }
  }
  else if(state == on){
    ledState = HIGH;
  }
  else{
    Serial.println("Invalid state.");
  }
  digitalWrite(ledPin, ledState);
}

void changeState(){
  if(state < 2){
    state++;
  }
  else{
    state = off;
  }
}

