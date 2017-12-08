void setup() {
  Serial.begin(9600);
}

void loop() {
  static unsigned long tall = 2;
  while(tall != 0){
    Serial.println(tall)
    tall = tall * 2;
  }

  for i in range(4){
    for(int i = 0; i < 4; i++){
      for(int j = 0; j <= 3; j++;){
        Serial.print(i);
        Serial.print("-");
        Serial.println(j);
      }
    }
  }
}

