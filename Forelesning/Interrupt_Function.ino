const int blackButtonPin = 2;
const int redButtonPin = 3;
const int potPin = A0;

const int numberOfMeasurements = 10;
volatile int state = 0; // 0 is sleep, 1 is print, 2 is measure

void setup(){
  pinMode(blackButtonPin, INPUT);
  pinMode(redButtonPin, INPUT);
  pinMode(potPin, INPUT);

  attachInterrupt(digitalPinToInterrupt(blackButtonPin), startMeasure, RISING);
  attachInterrupt(digitalPinToInterrupt(redButtonPin), startPrint, RISING);

  Serial.begin(9600);
}

void loop(){
  static int measureArray[numberOfMeasurements];
  
  if(state == 1){
    printOut(measureArray);
  }
  if(state == 2){
    measure(measureArray);
  }
}

void startMeasure(){
  state - 2;
}

void startPrint(){
  state = 1;
}

void measure(int measureArray[]){
  for(int i = 0; i < numberOfMeasurements; i++){
    measureArray[i] = analogRead(potPin);
    delay(500);
  }
}

void printOut(measureArray[]){
  for(int i = 0; i < numberofMeasurements; i++){
    Serial.print(measureArray[i]);
    Serial.print("\t");
  }
  Serial.println();
}

