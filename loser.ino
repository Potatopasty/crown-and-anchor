void loser()  {

  unsigned long previousMillis = millis();

  while (millis() - previousMillis < 3000)
  {

    display.fillRect(0, 0, 128, 7, 0);
    display.setTextSize(1);
    display.setTextColor(1);
    display.setCursor(74, 0);
    display.print(F("Gold: "));
    display.print(money);

    display.fillRect(0, 10, 128, 18, 0);
    centerText("CAPTAIN WINS!", 64, 15);

    if (money == 0)  {
      display.drawBitmap(52, 30, skull, 23, 27, 1);
    }
    display.display();
  }

  if (money == 0) {
    gamemode = GAMEOVER;
  }
  else {
    gamemode = SUITCHOISE;
  }
}
