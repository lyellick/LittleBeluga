#include <Arduboy2.h>
#include <ArduboyTones.h>

#include "sound.h"
#include "sprites.h"

Arduboy2 arduboy;
ArduboyTones sound(arduboy.audio.enabled);
constexpr uint8_t BELUGA_WIDTH = 15;
constexpr uint8_t BELUGA_HEIGHT = 15;
int16_t belugaX = (WIDTH - BELUGA_WIDTH) / 2;
int16_t belugaY = (HEIGHT - BELUGA_HEIGHT) / 2;
bool inTitleScreen = true;

void setup() {
  arduboy.begin();
  arduboy.setFrameRate(60);
  sound.tones(titleScreenScore);
}

void loop() {
  if (!arduboy.nextFrame()) {
      return;
  }

  arduboy.pollButtons();

  if (inTitleScreen) {
    if (arduboy.buttonsState() != 0) {
      inTitleScreen = false;
      sound.noTone();
    }

    arduboy.drawBitmap(0, 0, titleScreen, WIDTH, HEIGHT, WHITE);
    arduboy.display(CLEAR_BUFFER);
    return;
  }

  if (arduboy.pressed(LEFT_BUTTON) && belugaX > 0) {
    --belugaX;
  }
  if (arduboy.pressed(RIGHT_BUTTON) && belugaX < WIDTH - BELUGA_WIDTH) {
    ++belugaX;
  }
  if (arduboy.pressed(UP_BUTTON) && belugaY > 0) {
    --belugaY;
  }
  if (arduboy.pressed(DOWN_BUTTON) && belugaY < HEIGHT - BELUGA_HEIGHT) {
    ++belugaY;
  }

  if (arduboy.justPressed(A_BUTTON)) {
    sound.tones(bubblePop);
  }
  if (arduboy.justPressed(B_BUTTON)) {
    sound.tones(bubbleGenerate);
  }

  arduboy.drawBitmap(belugaX, belugaY, beluga + 2, BELUGA_WIDTH, BELUGA_HEIGHT, WHITE);

  arduboy.display(CLEAR_BUFFER);
}
