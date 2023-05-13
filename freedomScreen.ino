void freedomScreen() {

  unsigned long previousMillis = millis();

  while (millis() - previousMillis < 4000)
  {

    display.clearDisplay();

    display.drawBitmap(0, 0, freedom, 111, 48, 1);

    display.display();
  }
  display.clearDisplay();
  suitChoise = 1;
  money = 10;
  gamemode = TITLE;

}
