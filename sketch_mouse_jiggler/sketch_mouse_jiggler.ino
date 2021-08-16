#include <Mouse.h>

void setup() {
  // initialize mouse control
  Mouse.begin();
}

void loop() {
  Mouse.move(5, 0, 0);
  delay(1);
  Mouse.move(-5, 0, 0);

  delay(1000 * 10);
  delay(1000 * 10);
  delay(1000 * 10);
}
