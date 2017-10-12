// DFDP1100-1 17H Digitale systemer og programmering | Lab 6:

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
}


