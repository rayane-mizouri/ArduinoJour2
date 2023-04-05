#include <LiquidCrystal.h>

LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

void setup() {
  lcd_1.begin(16, 2);
}

void loop() {

  int tension = analogRead(A0);
  
  
  float tension_volts = tension * 5.0 / 1023.0;

  lcd_1.clear();


  lcd_1.setCursor(0, 0);
  lcd_1.print("Tension: ");
  lcd_1.print(tension_volts);
  lcd_1.print("V");

  delay(500);
}
