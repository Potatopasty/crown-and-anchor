void choise() {

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(1);

  display.drawBitmap(10, 14, spade, 11, 10, 1);
  display.drawBitmap(29, 14, heart, 11, 10, 1);
  display.drawBitmap(48, 14, club, 11, 10, 1);
  display.drawBitmap(66, 13, diamond, 11, 11, 1);
  display.drawBitmap(85, 13, crown, 15, 12, 1);
  display.drawBitmap(107, 13, anchor, 11, 12, 1);

  display.setCursor(74, 0);
  display.print(F("Gold: "));
  display.print(money);

  if (rightButton.uniquePress())
  {
    suitChoise++;
    if (suitChoise >= 7) suitChoise = 1;
  }
  if (leftButton.uniquePress())
  {
    suitChoise--;
    if (suitChoise <= 0) suitChoise = 6;
  }
  if (startButton.uniquePress())
  {
    gamemode = GAME;
  }

  //  1. Spade
  //  2. Heart
  //  3. Club
  //  4. Diamond
  //  5. Crown
  //  6. Anchor

  switch (suitChoise) {

    case 1:
      if ((millis() / 300) % 2 == 0) {
      display.drawRoundRect(6, 11, 19, 16, 4, 1);
      }


      break;

    case 2:
      if ((millis() / 300) % 2 == 0) {
      display.drawRoundRect(25, 11, 19, 16, 4, 1);
      }


      break;

    case 3:
      if ((millis() / 300) % 2 == 0) {
      display.drawRoundRect(44, 11, 19, 16, 4, 1);
      }


      break;

    case 4:
      if ((millis() / 300) % 2 == 0) {
      display.drawRoundRect(62, 11, 19, 16, 4, 1);
      }


      break;

    case 5:
      if ((millis() / 300) % 2 == 0) {
      display.drawRoundRect(83, 11, 19, 16, 4, 1);
      }


      break;

    case 6:
      if ((millis() / 300) % 2 == 0) {
      display.drawRoundRect(103, 11, 19, 16, 4, 1);
      }


      break;
  }
  display.display();
}
