int heltall = 5;
float desimaltall = 2.345;
String tekst = "hei";
char tegn = 's';
long stortTall = 100000000000;
boolean sannEllerUsann = true;
int globalVariabel = 67;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(tegn);
  Serial.println((int)tegn);

  if(true){
    int nyVariabel = 4;
  }

  static int tall = 0; // statisk variabel som ikke endres i en loop
  static unsigned int tall = 0 // statisk variabel som ikke endres i en loop og ikke blir negativ
  Serial.println(tall);
  tall++;
}
