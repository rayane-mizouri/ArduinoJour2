#include <LiquidCrystal.h>


LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

void setup()
{
  lcd_1.begin(16, 2);
  lcd_1.print("hello world!");
}

void loop()
{
  
}