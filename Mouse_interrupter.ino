#include <Mouse.h>
void setup() {
  // put your setup code here, to run once:
    Mouse.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(5000);
  //move left
  Mouse.move(10, 0);
  delay(100);
  Mouse.move(10, 0);
  delay(100);
  Mouse.move(10, 0);
  delay(100);
  Mouse.move(10, 0);
  delay(100);
  Mouse.move(10, 0);
  delay(100);
  //move right
  Mouse.move(0, 10);
  delay(100);
  Mouse.move(0, 10);
  delay(100);
  Mouse.move(0, 10);
  delay(100);
  Mouse.move(0, 10);
  delay(100);
  Mouse.move(0, 10);
  delay(100);
  //move up
  Mouse.move(-10, 0);
  delay(100);
  Mouse.move(-10, 0);
  delay(100);
  Mouse.move(-10, 0);
  delay(100);
  Mouse.move(-10, 0);
  delay(100);
  Mouse.move(-10, 0);
  delay(100);
  //move down
  Mouse.move(0, -10);
  delay(100);
  Mouse.move(0, -10);
  delay(100);
  Mouse.move(0, -10);
  delay(100);
  Mouse.move(0, -10);
  delay(100);
  Mouse.move(0, -10);
  delay(100);
}
