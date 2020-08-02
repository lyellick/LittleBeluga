#include <Arduboy2.h>
#include <Sprites.h>
#include <ArduboyTones.h>

#include "sound.h"

Arduboy2 arduboy;
ArduboyTones sound(arduboy.audio.enabled);
Sprites sprites;



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
}