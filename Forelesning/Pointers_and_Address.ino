void setup() {
  Serial.begin(9600);
}

void loop() {
  int tall1 = 4;
  int tall2 = 17;

  int* pointer1 = &tall1; // Adressen til variabel tall1
  int* pointer2 = &tall2; // Adressen til variabel tall2
  
  Serial.println((unsigned int) pointer1);
  Serial.println((unsigned int) pointer2);
  Serial.println(*pointer1); // Gå tilbake fra adresse til vanlig int tall
  
  swap2(tall1, tall2);
  Serial.println(tall1);
  Serial.println(tall2);

  while(true);
}

void swap(int tall1, tall2){
  int tmp = tall1;
  tall1 = tall2;
  tall2 = tmp;
}

void swap2(int* pTall1, pTall2){
  int tmp = *pTall1;
  *pTall1 = *pTall2;
  *pTall2 = tmp;
}

