const int ledPin = 10;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  for(int i = 0; i <= 255; i++){
    analogWrite(ledPin, i);
    delay(20); 
  }
}

