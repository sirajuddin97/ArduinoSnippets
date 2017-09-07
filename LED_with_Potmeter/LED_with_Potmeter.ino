// LED with Potmeter - Task 5

// Variables
int led = 8;
int petro = A1;
int petroValue = 0;

void setup(){
  pinMode(led, OUTPUT);
  pinMode(petro, INPUT);
}

void loop(){
  petroValue = analogRead(petro);

  if(petroValue <= 300){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
}

