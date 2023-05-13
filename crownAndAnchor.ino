#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
// #include <Adafruit_SSD1306.h> // 0,96" OLED
#include <Adafruit_SH110X.h> // 1,3" OLED
#include <Button.h>

#include "bitmaps.h"

Button leftButton = Button(3, BUTTON_PULLUP_INTERNAL, true, 50);
Button rightButton = Button(2, BUTTON_PULLUP_INTERNAL, true, 50);
Button startButton = Button(10, BUTTON_PULLUP_INTERNAL, true, 50);

#define  TITLE           0
#define  SUITCHOISE      1
#define  GAME            2
#define  WINNER          3
#define  LOSER           4
#define  GAMEOVER        5
#define  FREEDOM         6
#define  INFOS           7


#define SCREEN_WIDTH     128
#define SCREEN_HEIGHT    64
#define OLED_RESET       -1
#define i2c_Address      0x3c
// Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);  // 0,96" OLED
Adafruit_SH1106G display = Adafruit_SH1106G(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);  // 1,3" OLED

byte gamemode = TITLE;
byte money = 10;
byte suitChoise = 1;
byte info;
byte flagAnim;
unsigned long previousMillis = 0;

void setup() {

  //  display.begin(SSD1306_SWITCHCAPVCC, i2c_Address);  // 0,96" OLED
  display.begin(i2c_Address, true);  // 1,3" OLED
  display.display();
  display.clearDisplay();

  randomSeed(analogRead(0));

}

void loop() {

  switch (gamemode) {

    case TITLE:
      title();
      flagAnimation();

      break;

    case SUITCHOISE:
      choise();

      break;

    case GAME:
      game();

      break;

    case WINNER:
      winner();

      break;

    case LOSER:
      loser();

      break;

    case GAMEOVER:
      overScreen();

      break;

    case FREEDOM:
      freedomScreen();

      break;

    case INFOS:
      infos();

      break;
  }
}

// HELPER FUNCTIONS

// CENTER TEXT

void centerText(const char *buf, int x, int y)
{
  int16_t x1, y1;
  uint16_t w, h;
  display.getTextBounds(buf, 0, y, &x1, &y1, &w, &h);
  display.setCursor(x - w / 2, y);
  display.print(buf);
}
