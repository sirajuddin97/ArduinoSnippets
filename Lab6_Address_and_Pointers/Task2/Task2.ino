// DFDP1100-1 17H Digitale systemer og programmering | Lab 6, Oppgave 2:

void setup() {
  Serial.begin(9600);
}

void loop() {
  int tall;
  int faktorer[20];

  initialiser(faktorer);
  hentTall(tall);
  faktoriser(tall, faktorer);
  skrivUt(faktorer);
}

void initialiser(int liste[]){
  // Alle tallene i arrayet blir endret til 0
  for(int i = 0; i < 21; i++){
    liste[i] = 0;
  }
}

void hentTall(int &tall){
  // Vi leser adressen til variabelen 'tall' og gir den en verdi
  Serial.println("Skriv inn et tall: ");
  while(Serial.available() == 0);
  tall = Serial.parseInt();
}

void faktoriser(int tall, int liste[]){
  // Tallet faktoriseres og lagres i arrayet
  if(tall != 1 && tall != 0){
    int faktor = 2;
    int count = 0;

    while(tall > 1){
      if(tall % faktor == 0){
        liste[count] = faktor;
        tall = tall / faktor;
        count++;
      }
      else{
        faktor++;
      }
    }
  }
  else{
    Serial.print("FEIL: Tallet du skrev inn er ugyldig!");
  }
}

void skrivUt(int liste[]){
  // Funksjonen skriver ut alle tallene i arrayet utenom 0
  if(liste[0] != 0){
    Serial.print("Faktorisert: ");

    for(int i = 0; i < 21; i++){
      int count = i + 1;
      
      if(liste[i] != 0){
        Serial.print(liste[i]);
  
        if(liste[count] != 0){
          Serial.print(" * ");
        }
      }
    }
  }
  Serial.println();
  Serial.println();
}

