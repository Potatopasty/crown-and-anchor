
const int flagInterval = 150;

void flagAnimation() {

  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= flagInterval)
  {
    flagAnim++;
    previousMillis = currentMillis;
    if (flagAnim >= 5) flagAnim = 1;

  }

  switch (flagAnim) {

    case 1:
      display.fillRect(15, 18, 9, 3, 0);
      display.drawBitmap(15, 18, flag2, 9, 3, 1);

      break;

    case 2:
      display.fillRect(15, 18, 9, 3, 0);
      display.drawBitmap(15, 18, flag1, 9, 3, 1);

      break;

    case 3:
      display.fillRect(15, 18, 9, 3, 0);
      display.drawBitmap(15, 18, flag0, 9, 3, 1);

      break;

    case 4:
      display.fillRect(15, 18, 9, 3, 0);
      display.drawBitmap(15, 18, flag1, 9, 3, 1);

      break;
  }

  display.display();
}
