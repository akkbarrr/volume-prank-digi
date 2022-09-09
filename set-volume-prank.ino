#include "DigiKeyboard.h"
/* function init */
//script created by akbar @pegar159
void setup()
{//LED akan mati saat kode sedang berjalan, ini berarti perangkat siap untuk dicabut apabila LED menyala kembali
  pinMode(1, OUTPUT); //LED di Model A
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(1000);
  digitalWrite(1, LOW);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT, KEY_R);
  DigiKeyboard.delay(200);
  DigiKeyboard.println("PowerShell.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.println("Function Set-Speaker($Volume){$wshShell = new-object -com wscript.shell;1..50 | % {$wshShell.SendKeys([char]174)};1..$Volume | % {$wshShell.SendKeys([char]175)}}");
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.println("Set-Speaker -Volume 100");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.println("start 'https://www.youtube.com/watch?v=TRmmNBqsNvw'");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.println("$lockscreen.");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
}

/* endpoint loop */
void loop() {}
