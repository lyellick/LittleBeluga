#include <Arduboy2.h>
#include <Sprites.h>
#include <ArduboyTones.h>

#include "sound.h"
#include "sprites.h"

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

  sprites.drawSelfMasked(0, 0, titleScreen, 60);

  arduboy.display(CLEAR_BUFFER);
}