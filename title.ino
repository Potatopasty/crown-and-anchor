void title() {

  if (leftButton.isPressed() && rightButton.isPressed()) {
    gamemode = INFOS;
    info = 1;
  }

  display.setTextSize(1);
  display.setTextColor(1, 0);

  display.setTextSize(1);
  display.setTextColor(1, 0);
  display.setCursor(74, 0);
  display.print(F("Gold: 10"));

  display.drawBitmap(0, 0, titleLogo, 128, 64, 1);
  display.setCursor(62, 54);
  display.print(F("PRESS START"));

  display.display();

  if (startButton.uniquePress())
  {
    gamemode = SUITCHOISE;
  }
}
