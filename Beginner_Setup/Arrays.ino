const int potPin = A0;
const int k = 100;
int ledPins[] = {3, 4, 5, 6, 9, 12};

void setup() {
  Serial.begin(9600);
  pinMode(potPin, INPUT);

  // Smart method for many LEDs:
  for(int i = 0; i < 6; i++){
    pinMode(ledPins[i], OUTPUT);
  }
  
}

void loop() {
  // Array 1:
  int test[k];
  test[0] = analogRead(potPin);
  test[1] = analogRead(potPin);
  test[2] = analogRead(potPin);
  Serial.println(test[0]);
  Serial.println(test[1]);

  // Array 2:
  int test[k];
  for(int i = 0; i < k; i++){
    test[i] = analogRead(potPin);
    Serial.println(test[i]);
  }

  // Array 3:
  int m2[4] = {2, 4, 6, 8, 10};
  String ukedager[] = {"man", "tir", "ons", "tor", "fre"};
}

