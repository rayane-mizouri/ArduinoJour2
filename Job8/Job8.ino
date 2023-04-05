#include <LiquidCrystal.h>

LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

byte progressBarChar[8] = {
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111
};

byte progressBarBlank[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

void setup() {
  lcd_1.begin(16, 2);
  lcd_1.createChar(0, progressBarChar);
  lcd_1.createChar(1, progressBarBlank);
}

void loop() {
  int percentage = 0;
  for (int i = 0; i <= 16; i++) {
    lcd_1.setCursor(i-1, 1);
    lcd_1.write((byte)0);
    for (int j = i; j < 16; j++) {
      lcd_1.write((byte)1);
    }
    lcd_1.setCursor(0, 0);
    lcd_1.print("Chargement : ");
    lcd_1.print(percentage);
    lcd_1.print("%");
    percentage = (i * 100) / 16;
    delay(200);
  }
  delay(3000);
}
