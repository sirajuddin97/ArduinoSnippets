const int potPin = A0;
const int buttonPin = 8;

struct data{
  int potValue;
  int buttonValue;
  unsigned long timeStamp;
};
data measurements[10];

void setup(){
  pinMode(potPin, INPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop(){
  measure();
  printOut();
  delay(10000);
}

void measure(){
  for(int i = 0; i < 10; i++){
    measurements[i].buttonValue = digitalRead(buttonPin);
    measurements[i].potValue = analogRead(potPin);
    measurements[i].timeStamp = millis();
    delay(500);
  }
}

void printOut(){
  for(int i = 0; i < 10; i++){
    Serial.print(measurements[i].buttonValue);
    Serial.print("\t");
    Serial.print(measurements[i].potValue);
    Serial.print("\t");
    Serial.println(measurements[i].timeStamp);
  }
}

