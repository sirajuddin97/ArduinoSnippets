int buttonPin = 7;
int xPin = A1;
int yPin = A2;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  Serial.begin(115200);
}

void loop() {
  int xPos = analogRead(xPin);
  int yPos = analogRead(yPin);
  int buttonClick = digitalRead(buttonPin);

  Serial.print("Is button clicked?: ");
  if(buttonClick == HIGH){
    Serial.println("No");
  }
  else{
    Serial.println("Yes");
  }
  Serial.print("X position: ");
  Serial.println(xPos);
  Serial.print("Y position: ");
  Serial.println(yPos);
  Serial.println();
  delay(100);
}

