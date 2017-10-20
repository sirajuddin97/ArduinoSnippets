struct data{
  int potValue;
  int buttonValue;
  unsigned long timeStamp;
};

const int potPin = A0;
const int buttonPin = 8;

void setup() {
  pinMode(potPin, INPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  
}
