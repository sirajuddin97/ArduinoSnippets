const int ledPin = 13;
const int buttonPin = 2;
volatile int ledState = LOW;
volatile unsigned long lastInterrupt = 0;
// vibrasjoner i knappen kan tolkes som at man trykker to ganger (f.eks hvis man trykker hardt på en nødknapp). Derfor setter man en tidsgrense som sjekker tid.
// volatile vil lagre variabelen i RAM med en gang, for å hindre at den ikke oppdateres. Nyttig i interrupt funksjoner.

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  attachInterrupt(digitalPinToInterrupt(buttonPin), funksjon, RISING);
}

void loop() {
  digitalWrite(ledPin, ledState);
}

void funksjon(){
  if((millis() - lastInterrupt) > 20){
    // Alternativ måte (kortere): ledState = !ledState;
    if(ledState == HIGH){
    ledState = LOW;
    }
    else if(ledState == LOW){
      ledState = HIGH;
    }
    lastInterrupt = millis();
  }
}

