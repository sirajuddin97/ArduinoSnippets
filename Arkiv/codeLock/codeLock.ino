volatile int button1State = 0;
volatile int button2State = 0;
int pressed1 = 0;

enum pins{
  led = 7,
  buzzer = 6,
  button1 = 3,
  button2 = 2
};

void setup() { 
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);

  attachInterrupt(digitalPinToInterrupt(button1), button1Clicked, CHANGE);
  attachInterrupt(digitalPinToInterrupt(button2), button2Clicked, CHANGE);
}

void loop() {
  digitalWrite(led, LOW);
  codeLock();
}

void button1Clicked(){
  button1State = !button1State;  
}

void button2Clicked(){
  button2State = !button2State;  
}

void codeLock(){
  if((button1State == 1) && (button2State == 0)){
    pressed1 = 1;
    Serial.println("B1 = HIGH, B2 = LOW");
    tone(buzzer, 2000, 50);
  }
  else{
    pressed1 = 0;
  }

  if((button2State == 1) && (button1State == 0)){
    Serial.println("B1 = LOW, B2 = HIGH");
    tone(buzzer, 2000, 50);
  }

  if((button1State == 1) && (button2State == 1) && (pressed1 == 0)){
    Serial.println("B1 = HIGH, B2 = HIGH");
    tone(buzzer, 2000, 50);
  }

  if((pressed1 == 1) && (button2State == 1)){
    while((pressed1 == 1) && (button2State == 1)){
      Serial.println("Riktig kombinasjon!");
      digitalWrite(led, HIGH);
    }
  }
}

