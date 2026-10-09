// C++ code
//
#include <Adafruit_LiquidCrystal.h>

int ok = 0;

Adafruit_LiquidCrystal lcd_2(2);

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
  lcd_2.begin(16, 2);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)

  if (analogRead(A0) < 1017) {
    Serial.println("Good job!");
  }

  if (analogRead(A0) > 1017) {
    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("water?");
    lcd_2.print("Water?");
    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("Water!");
    lcd_2.print("Water!");
    delay(1000); // Wait for 1000 millisecond(s)
    Serial.println("WATERRRR!");
    lcd_2.print("WATEERRRRR!!!!");
    while (analogRead(A0) > 1017) {
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(2, HIGH);
      delay(100); // Wait for 100 millisecond(s)
      digitalWrite(9, LOW);
      digitalWrite(8, LOW)
      ;digitalWrite(7, LOW);
      digitalWrite(2, LOW);
      delay(100); // Wait for 100 millisecond(s)
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(2, HIGH);
      delay(100); // Wait for 100 millisecond(s)
      digitalWrite(9, LOW);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
      digitalWrite(2, LOW);
    }
  }
}