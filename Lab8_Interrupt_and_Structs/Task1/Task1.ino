const int led = 3;
const int button = 2;
volatile int buttonState = 1;

void setup(){
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);

  attachInterrupt(digitalPinToInterrupt(button), turnOnLed, CHANGE);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(led, buttonState);
  Serial.println(buttonState);
}

void turnOnLed(){
  if(buttonState == 1){
    buttonState = 0;
  }
  else if(buttonState == 0){
    buttonState = 1;
  }
}

