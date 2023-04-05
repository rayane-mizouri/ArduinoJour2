#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int rouge = 9;
int vert = 10;
int bleu = 11;

void setup() {
  lcd.begin(16, 2);
  
  pinMode(rouge, OUTPUT);
  pinMode(vert, OUTPUT);
  pinMode(bleu, OUTPUT);
}

void loop() {
  int valeurPot = analogRead(A0);
  
  int valeurCouleur = map(valeurPot, 0, 1023, 0, 255);
  
  analogWrite(rouge, valeurCouleur);
  analogWrite(vert, valeurCouleur);
  analogWrite(bleu, valeurCouleur);

  lcd.setCursor(0, 0);
  lcd.print("Valeur pot:");
  lcd.setCursor(0, 1);
  lcd.print(valeurPot);
  delay(100);
}