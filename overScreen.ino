void overScreen() {

  unsigned long previousMillis = millis();

  while (millis() - previousMillis < 3000)
  {

    display.clearDisplay();

    display.drawBitmap(0, 0, gameOver, 128, 64, 1);

    display.display();
  }
  display.clearDisplay();
  suitChoise = 1;
  money = 10;
  gamemode = TITLE;

}
