// DFDP1100-1 17H Digitale systemer og programmering | Lab 6, Oppgave 1:

void setup() {
  Serial.begin(9600);
}

void loop() {
  int tall1 = -2;
  int tall2 = -7;
  int tall3 = -4;

  tall1 = abs1(tall1);
  abs2(tall2);
  abs3(&tall3);

  Serial.print(tall1);
  Serial.print(tall2);
  Serial.println(tall3);

  delay(500);
}

int abs1(int input){
  // Vi velger å bruke int istedenfor void fordi vi ønsker å returnere noe tilbake til funksjonen
  int tall = abs(input);
  return tall;
}

void abs2(int &input){
  // Her kan vi bruke void fordi vi ikke har noe å returnere tilbake til funksjonen
  int tall = abs(input);
  input = tall;
}

void abs3(int* input){
  // Her kan vi bruke void fordi vi ikke har noe å returnere tilbake til funksjonen
  int tall = abs(*input);
  *input = tall;
}
