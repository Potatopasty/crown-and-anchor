void game() {

  unsigned long previousMillis = millis();

  display.fillRect(0, 0, 128, 7, 0);  // REMOVE SELECT SUIT TEXT
  display.setTextSize(1);
  display.setTextColor(1);
  display.setCursor(74, 0);
  display.print(F("Gold: "));
  display.print(money);

  if (suitChoise == 1) {
    display.drawRoundRect(6, 11, 19, 16, 4, 1);
  }
  if (suitChoise == 2) {
    display.drawRoundRect(25, 11, 19, 16, 4, 1);
  }
  if (suitChoise == 3) {
    display.drawRoundRect(44, 11, 19, 16, 4, 1);
  }
  if (suitChoise == 4) {
    display.drawRoundRect(62, 11, 19, 16, 4, 1);
  }
  if (suitChoise == 5) {
    display.drawRoundRect(83, 11, 19, 16, 4, 1);
  }
  if (suitChoise == 6) {
    display.drawRoundRect(103, 11, 19, 16, 4, 1);
  }

  byte  randomValue1 = random(1, 7);
  byte  randomValue2 = random(1, 7);
  byte  randomValue3 = random(1, 7);

  byte  dice1 = (randomValue1);
  byte  dice2 = (randomValue2);
  byte  dice3 = (randomValue3);

  // DICE 1

  while (millis() - previousMillis < 1000)
  {
    if (dice1 == 1)  {
      display.drawRoundRect(14, 32, 32, 32, 4, 1); // Dice 1
      display.drawBitmap(19, 38, spadeBig, 22, 20, 1);
    }
    if (dice1 == 2)  {
      display.drawRoundRect(14, 32, 32, 32, 4, 1); // Dice 1
      display.drawBitmap(18, 38, heartBig, 24, 22, 1);
    }
    if (dice1 == 3)  {
      display.drawRoundRect(14, 32, 32, 32, 4, 1); // Dice 1
      display.drawBitmap(19, 38, clubBig, 22, 20, 1);
    }
    if (dice1 == 4)  {
      display.drawRoundRect(14, 32, 32, 32, 4, 1); // Dice 1
      display.drawBitmap(19, 37, diamondBig, 22, 22, 1);
    }
    if (dice1 == 5)  {
      display.drawRoundRect(14, 32, 32, 32, 4, 1); // Dice 1
      display.drawBitmap(17, 36, crownBig, 26, 24, 1);
    }
    if (dice1 == 6)  {
      display.drawRoundRect(14, 32, 32, 32, 4, 1); // Dice 1
      display.drawBitmap(19, 37, anchorBig, 22, 24, 1);
    }
    display.display();
  }

  // DICE 2


  while (millis() - previousMillis < 2000)
  {
    if (dice2 == 1)  {
      display.drawRoundRect(48, 32, 32, 32, 4, 1); // Dice 2
      display.drawBitmap(53, 38, spadeBig, 22, 20, 1);
    }
    if (dice2 == 2)  {
      display.drawRoundRect(48, 32, 32, 32, 4, 1); // Dice 2
      display.drawBitmap(52, 38, heartBig, 24, 22, 1);
    }
    if (dice2 == 3)  {
      display.drawRoundRect(48, 32, 32, 32, 4, 1); // Dice 2
      display.drawBitmap(53, 38, clubBig, 22, 20, 1);
    }
    if (dice2 == 4)  {
      display.drawRoundRect(48, 32, 32, 32, 4, 1); // Dice 2
      display.drawBitmap(53, 37, diamondBig, 22, 22, 1);
    }
    if (dice2 == 5)  {
      display.drawRoundRect(48, 32, 32, 32, 4, 1); // Dice 2
      display.drawBitmap(51, 36, crownBig, 26, 24, 1);
    }
    if (dice2 == 6)  {
      display.drawRoundRect(48, 32, 32, 32, 4, 1); // Dice 2
      display.drawBitmap(53, 37, anchorBig, 22, 24, 1);
    }
    display.display();
  }

  // DICE 3

  while (millis() - previousMillis < 3000)
  {
    if (dice3 == 1)  {
      display.drawRoundRect(82, 32, 32, 32, 4, 1); // Dice 3
      display.drawBitmap(87, 38, spadeBig, 22, 20, 1);
    }
    if (dice3 == 2)  {
      display.drawRoundRect(82, 32, 32, 32, 4, 1); // Dice 3
      display.drawBitmap(86, 38, heartBig, 24, 22, 1);
    }
    if (dice3 == 3)  {
      display.drawRoundRect(82, 32, 32, 32, 4, 1); // Dice 3
      display.drawBitmap(87, 38, clubBig, 22, 20, 1);
    }
    if (dice3 == 4)  {
      display.drawRoundRect(82, 32, 32, 32, 4, 1); // Dice 3
      display.drawBitmap(87, 37, diamondBig, 22, 22, 1);
    }
    if (dice3 == 5)  {
      display.drawRoundRect(82, 32, 32, 32, 4, 1); // Dice 3
      display.drawBitmap(85, 36, crownBig, 26, 24, 1);
    }
    if (dice3 == 6)  {
      display.drawRoundRect(82, 32, 32, 32, 4, 1); // Dice 3
      display.drawBitmap(87, 37, anchorBig, 22, 24, 1);
    }
    display.display();
  }

  // +1 WINNER logic

  if ((dice1 == suitChoise) && (dice2 != suitChoise) && (dice3 != suitChoise)) {
    display.fillRoundRect(48, 32, 114, 32, 4, 0);
    money += 1;
    gamemode = WINNER;
  }

  if ((dice2 == suitChoise) && (dice3 != suitChoise) && (dice1 != suitChoise))  {
    display.fillRoundRect(14, 32, 32, 32, 4, 0);
    display.fillRoundRect(82, 32, 32, 32, 4, 0);
    money += 1;
    gamemode = WINNER;
  }

  if ((dice3 == suitChoise) && (dice1 != suitChoise) && (dice2 != suitChoise))  {
    display.fillRoundRect(14, 32, 66, 32, 4, 0);
    money += 1;
    gamemode = WINNER;
  }

  // +2 WINNER logic

  if ((dice1 == suitChoise) && (dice2 == suitChoise) && (dice3 != suitChoise))  {
    display.fillRoundRect(82, 32, 32, 32, 4, 0);
    money += 2;
    gamemode = WINNER;
  }

  if ((dice2 == suitChoise) && (dice3 == suitChoise) && (dice1 != suitChoise))  {
    display.fillRoundRect(14, 32, 32, 32, 4, 0);
    money += 2;
    gamemode = WINNER;
  }
  if ((dice3 == suitChoise) && (dice1 == suitChoise) && (dice2 != suitChoise))  {
    display.fillRoundRect(48, 32, 32, 32, 4, 0);
    money += 2;
    gamemode = WINNER;
  }

  // +3 WINNER logic

  if ((dice1 == suitChoise) && (dice2 == suitChoise) && (dice3 == suitChoise))  {
    money += 3;
    gamemode = WINNER;
  }

  // Loser logic

  if ((dice1 != suitChoise && dice2 != suitChoise && dice3 != suitChoise))  {
    display.fillRoundRect(14, 32, 114, 32, 4, 0);
    money -= 1;
    gamemode = LOSER;
  }
  display.display();
}
