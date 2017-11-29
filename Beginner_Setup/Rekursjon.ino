void setup() {
  Serial.begin(9600);
}

void loop(){
  int svar = sum(1);
  Serial.println(svar);
}

int sum(int i){
  if(i == 1){
    return 1;
  }
  return i + sum(i - 1);
}

