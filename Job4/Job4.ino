#include <LiquidCrystal.h>

int seconds = 0;
bool pause = false;
int buttonPin = 6;

LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

void setup()
{
lcd_1.begin(16, 2);

lcd_1.print("nom du groupe");

pinMode(buttonPin, INPUT_PULLUP);
}

void loop()
{
if (!pause) {
lcd_1.setCursor(0, 1);
lcd_1.print(seconds);
delay(1000);
seconds += 1;
}

if (digitalRead(buttonPin) == LOW) {
pause = !pause;
delay(100);
}
}
