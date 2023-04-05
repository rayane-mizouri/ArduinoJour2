#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  unsigned long tempsActuel = millis();
  int heure = (tempsActuel / 3600000) % 24;
  int minute = (tempsActuel / 60000) % 60;
  int seconde = (tempsActuel / 1000) % 60;

  lcd.clear();
  lcd.setCursor(0, 0);
  if (heure < 10) {
    lcd.print("0");
  }
  lcd.print(heure);
  lcd.print(":");
  if (minute < 10) {
    lcd.print("0");
  }
  lcd.print(minute);
  lcd.print(":");
  if (seconde < 10) {
    lcd.print("0");
  }
  lcd.print(seconde);
  
  delay(1000);
}
