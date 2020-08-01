#include <Arduboy2.h>

Arduboy2 arduboy;

void setup() {
  arduboy.begin();
  arduboy.setFrameRate(60);
}

void loop() {
  if (!arduboy.nextFrame()) {
      return;
  }

  arduboy.pollButtons();

  uint8_t button = arduboy.buttonsState();

  arduboy.display(CLEAR_BUFFER);

  arduboy.setCursor(0, 0);
  arduboy.print(F("Li'l Beluga Baseline"));
}