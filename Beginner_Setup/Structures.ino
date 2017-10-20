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
  delay(1000);
}

void measure(){
  //
}

void printOut(){
  //
}

