// DFDP1100-1 17H Digitale systemer og programmering | Lab 9:
#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
const int dataPin[] = {9, 8, 7};
const int clk = 10;

void setup(){
  lcd.begin(16, 2);
  pinMode(clk, OUTPUT);
  for(int i = 0; i < 3; i++){
    pinMode(dataPin[i], INPUT);
  }
}

void loop(){
  digitalWrite(clk, HIGH);
  delay(1000);
  digitalWrite(clk, LOW);
  delay(1000);

  lcd.clear();
  lcd.setCursor(5, 0);
  lcd.print("LAB 9");
  lcd.setCursor(0, 1);
  lcd.print("BIN: ");
  
  for(int i = 0; i < 3; i++){
    lcd.print(digitalRead(dataPin[i]));
  }
  lcd.print("  DEC: ");
  
  int liste[3];
  for(int i = 0; i < 3; i++){
    liste[i] = digitalRead(dataPin[i]);
  }
  
  int dec = (4 * liste[0]) + (2 * liste[1]) + (liste[2]);
  lcd.print(dec);
  delay(1500);
}

