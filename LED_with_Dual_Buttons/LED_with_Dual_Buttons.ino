// LED with Dual Buttons - Task 4

// Variables
int led = 10;
int ledSpeed = 75;
int button1 = 12;
int button2 = 5;
int button1State = 0;
int button2State = 0;

void setup(){
  pinMode(led, OUTPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
}

void loop(){
  button1State = digitalRead(button1);
  button2State = digitalRead(button2);

  if(button1State == HIGH || button2State == HIGH){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
  
  if(button1State == HIGH && button2State == HIGH){
    digitalWrite(led, HIGH);
    delay(ledSpeed);
    digitalWrite(led, LOW);
    delay(ledSpeed);
  }
  else{
    digitalWrite(led, LOW);
  }
}

