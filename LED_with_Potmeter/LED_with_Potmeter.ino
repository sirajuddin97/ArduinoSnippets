// LED with Potmeter - Task 5

// Variables
int led = 7;
int buzzer = 2;
int petro = A1;
int petroValue = 0;

void setup(){
  pinMode(led, OUTPUT);
  pinMode(petro, INPUT);
  pinMode(buzzer, OUTPUT);
  //Serial.begin(9600); // For debugging
}

void loop(){
  petroValue = analogRead(petro);
  //Serial.println(petroValue); // For debugging

  if(petroValue > 0 && petroValue <= 300){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }

  if(petroValue >= 1000){
    tone(buzzer, 1000);
  }
  else{
    noTone(buzzer);
  }
}

