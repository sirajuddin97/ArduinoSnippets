void setup(){
  //
}

void loop(){
  int tall = 2;
  
  // alternativ 1:
  leggTil3a(&tall);
  Serial.println(tall);

  // alternativ 2:
  leggTil3b(tall);
  Serial.println(tall);

  // alternativ 3:
  tall = leggTil3c(tall);
  Serial.println(tall);
}

void leggTil3a(int* i){
  *i = *i + 3;
}

void leggTil3b(int& i){
  i = i + 3;
}

int leggTil3c(int i){
  i = i + 3;
  return i;
}

