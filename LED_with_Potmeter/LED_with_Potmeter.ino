// LED with Potmeter - Task 5

// Variables
int led = 7;
int petro = A1;
int petroValue = 0;

void setup(){
  pinMode(led, OUTPUT);
  pinMode(petro, INPUT);
}

void loop(){
  petroValue = analogRead(petro);

  Serial.print(petroValue);

  if(petroValue <= 300){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
}

