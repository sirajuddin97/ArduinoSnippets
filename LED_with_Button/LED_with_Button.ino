// LED with Button - Task 3

// Variables
int led = 10;
int button = 12;
int buttonState = 0;

void setup(){
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop(){
  buttonState = digitalRead(button);

  if(buttonState == HIGH){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
}

