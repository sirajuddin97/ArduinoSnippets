const int ledPin = 13;
const int buttonPin = 2;
volatile int state = 0; // 0 = off, 1 = blink, 2 = on
int ledState = LOW;
const int intervall = 1500;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(buttonPin), changeState, RISING);
}

void loop() {
  static unsigned long lastChange = 0;

  if(state == 0){
    ledState = LOW;
  }
  else if(state == 1){
    /*
    digitalWrite(ledPin, HIGH);
    delay(intervall);
    digitalWrite(ledPin, LOW);
    delay(intervall);
    */

    // siden delay pauser hele Arduino så har vi pause på denne måten istedet:
    if((millis() - lastChange) >= intervall){
      ledState = !ledState;
      lastChange = millis();
    }
  }
  else if(state == 2){
    ledState = HIGH;
  }
  else{
    Serial.println("Invalid state.");
  }
  digitalWrite(ledPin, ledState);
}

void changeState(){
  /*
  Alternativ måte:
  state = (state + 1)%3;
  */
  
  if(state < 2){
    state++;
  }
  else{
    state = 0;
  }
}

