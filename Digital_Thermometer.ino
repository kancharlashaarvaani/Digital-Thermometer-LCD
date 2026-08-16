// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// declaring the variables
int degree;
double realDegree;
String lcdBuffer;

void setup() {
  // setting up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  degree = 0;
  realDegree = 0;
  lcd.print("Today's temp:");
}

void loop() {
  degree = analogRead(0);
  realDegree = (double)degree / 1024;
  realDegree *= 5;
  realDegree -= 0.5;
  realDegree *= 100;

  // Fahrenheit's formula
  realDegree = (9.0 / 5) * (realDegree) + 32;

  lcd.setCursor(0, 1);
  String output = String(realDegree) + String((char)178) + "F";
  lcd.print(output);
}
