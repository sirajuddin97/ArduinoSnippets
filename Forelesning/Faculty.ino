// 4! = 4*3*2*1 eller 4! = 4*3!
// Det vil si: n! = n*(n-1)!

void setup(){
  Serial.begin(9600);
}

void loop(){
  int tall;
  hentTall(&tall);
  Serial.println(fakultet(tall));
}

void hentTall(int* p_tall){
  Serial.println("Skriv inn et tall: ");
  while(Serial.available()) == 0;{}
  *p_tall = Serial.parseInt();
}

unsigned long fakultet(int n){
  if(n < 2){
    return 1;
  }
  return n * fakultet(n-1);  
}

