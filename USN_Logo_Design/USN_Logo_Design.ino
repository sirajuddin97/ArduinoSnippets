// USN Logo Design

// Includes
#include <Mirobot.h>

// Variables
int U = 0;

Mirobot mirobot;

void setup() {
  mirobot.begin();
}

void loop() {
  // U letter
  mirobot.pendown();
  
  while(U == 0){
    mirobot.back(60);
    mirobot.right(90);
    mirobot.forward(40);
    mirobot.penup();
    mirobot.forward(15);
    mirobot.left(90);
    mirobot.pendown();
    mirobot.left(90);
    mirobot.penup();
    mirobot.right(90);
    mirobot.pendown();
    mirobot.forward(60);
    U++;
  }
  mirobot.penup();
  delay(10000);
}
