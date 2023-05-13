void infos() {

  switch (info) {

    case 1:
      display.clearDisplay();
      display.setTextSize(1);
      display.setTextColor(1);
      display.setCursor(0, 0);
      display.println(F("You are trapped on"));
      display.println(F("evil ghost ship."));
      display.println(F("Captain will give"));
      display.println(F("you one change"));
      display.println(F("to save your life."));
      display.println(F("Win him by betting on"));
      display.println(F("crown & anchor game"));
      display.println(F("and you will be free."));
      display.setCursor(120, 0);
      if ((millis() / 500) % 2 == 0) {
        display.write(0x10);
      }

      display.display();

      if (rightButton.uniquePress()) {
        info = 2;
      }
      break;

    case 2:
      display.clearDisplay();
      display.setTextSize(1);
      display.setTextColor(1);
      display.setCursor(0, 0);
      display.println(F("To get your freedom"));
      display.println(F("you need 30 gold"));
      display.println(F("Escudos. You have 10,"));
      display.println(F("win the rest."));
      display.println(F("If you lose all your"));
      display.println(F("gold, you'll be"));
      display.println(F("marooned to desert"));
      display.println(F("island. Good luck!"));
      display.setCursor(120, 0);
      if ((millis() / 500) % 2 == 0) {
        display.write(0x10);
      }

      display.display();

      if (rightButton.uniquePress()) {
        display.clearDisplay();
        suitChoise = 1;
        money = 10;
        gamemode = TITLE;
      }
      break;
  }
}
