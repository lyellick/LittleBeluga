# LittleBeluga

![Lil'Beluga Title Screen](https://github.com/lyellick/LittleBeluga/blob/master/LittleBeluga/assets/TitleScreen/LittleBelugaTitle.png)


## About

Little Beluga aka Li'l Beluga is a simple game where you move a baby beluga whale around and dodge waves.

## How to Play

- Goal: swim home by surviving until the distance bar reaches zero.
- Start: from the title screen, press any button.
- Movement:
  - `UP` moves the beluga up.
  - `DOWN` moves the beluga down.
- Dodge the white wave columns by passing through their gaps.
- Score increases by 1 each time you safely pass a column.
- Speed gradually increases as you continue.
- You lose if you hit a column.
- You win the level when the distance bar is empty (`You made it home!`).
- After Game Over or Level Complete, press any button to restart.

## Ways to Play

### Grab a Prebuilt `.hex`

- Use the prebuilt file in this repo: `releases/LittleBeluga.hex`
- You can load that file directly in [Ardens](https://tiberiusbrown.github.io/Ardens/) without building.

### Build a `.hex` with PlatformIO

1. Install dependencies:
   - [PlatformIO Core](https://docs.platformio.org/en/latest/core/installation/index.html)
   - A C/C++ toolchain environment supported by PlatformIO (PlatformIO will download board/tool dependencies from `platformio.ini` automatically).
2. Open a terminal in this repository.
3. Build the Arduboy target:

```powershell
cd LittleBeluga
pio run -e arduboy
```

4. The compiled ROM is generated at:

```text
LittleBeluga/.pio/build/arduboy/firmware.hex
```

5. Optional: copy it to the shared grab location:

```powershell
copy LittleBeluga\\.pio\\build\\arduboy\\firmware.hex releases\\LittleBeluga.hex
```

### Play in Ardens (Browser Emulator)

1. Open: https://tiberiusbrown.github.io/Ardens/
2. Load `firmware.hex` (use the page's load/upload action, or drag-and-drop the file into the emulator page).
3. Start playing with your keyboard/controller mapping in Ardens.

## Inspiration

My wife and I appreciate [Raffi Cavoukian](https://en.wikipedia.org/wiki/Raffi) and his musical talent to create children's songs that are fun and wholesome. We sing Raffi songs to him while we play or when he is fussy the song [Baby Beluga](https://www.youtube.com/watch?v=CDx9zqDpSik) always puts a smile on his face. I thought this would be a perfect piece of media to adapt for a *pretty simple* game.

## Dedication

To my wife, who has always been excited and supportive for any new hobby I find.

To my son, who smiles at me when ever I enter a room; thats all I need buddy.

And to our new unborn baby, whom I don't know yet, but I am sure you are cool too. `:P`

## Special Thanks

[Kevin Bates](https://twitter.com/bateskecom) - Creator of Arduboy

[Pharap](https://community.arduboy.com/u/pharap/summary) - Community leader

My Mom - Made me the man I am today

My Dad - Started my career and obsession with programming
