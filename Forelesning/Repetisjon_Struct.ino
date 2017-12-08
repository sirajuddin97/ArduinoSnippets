// prøv dette: sett String merke og String farge under struct og flytt bilmerker merke; under enums

enum bilmerker{
  volvo,
  ford,
  opel,
  nissan
};

enum farger{
  sort,
  hvit,
  gul
};

struct bil{
  int modell;
  String regnr;
  bilmerker merke;
  farger farge;
};
bil bilRegister[40];

void setup(){

}

void loop(){
  bilRegister[0].modell = 1999;
  bilRegister[0].merke = ford;
  bilRegister[0].farge = sort;
  bilRegister[0].regnr = "DF12323";
}

