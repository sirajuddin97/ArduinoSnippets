// Joystick max value: 1023
// RGB led max value: 255
  
int buttonPin = 7;
int xPin = A1;
int yPin = A2;

int ledR = 8;
int ledG = 9;
int ledB = 10;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  int xPos = analogRead(xPin);
  int yPos = analogRead(yPin);
  int buttonClick = digitalRead(buttonPin);
  
  int xMax = xPos/4; // 1023 -> 255
  int yMax = yPos/4; // 1023 -> 255

  if(buttonClick == LOW){
    analogWrite(ledG, 255);
    analogWrite(ledR, 0);
    analogWrite(ledB, 0);
  }
  else{
    analogWrite(ledG, 0);
    analogWrite(ledR, xMax);
    analogWrite(ledB, yMax); 
  }
}

