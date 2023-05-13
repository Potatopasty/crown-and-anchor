void winner()  {

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
    centerText("YOU WIN!", 64, 15);
    display.display();
  }

  if (money >= 30) {
    gamemode = FREEDOM;
  }
  else {
    gamemode = SUITCHOISE;
  }

}
