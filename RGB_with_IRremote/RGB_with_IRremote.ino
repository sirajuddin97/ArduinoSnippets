#include <IRremote.h>

int IRPin = 11;

IRrecv irrecv(IRPin);
decode_results results;

void setup(){
  Serial.begin(9600);
  irrecv.enableIRIn();
}

void loop(){
  if(irrecv.decode(&results)){
    Serial.println(results.value, HEX);
    irrecv.resume(); // Receive the next value
  }
}

