void PURPLE() {
  for (int i = 0; i < N_PIXELS; i++) {

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(128, 0, 128));

    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(val);
  }
}

void Halloween() {

  setColor();
  for (int i = 0; i < N_PIXELS; i++) {

    pixels.setPixelColor(i++, pixels.Color(255, 165, 0)); //orange
    pixels.show(); // update pixels
    delay(val);



    pixels.setPixelColor(i - 10, pixels.Color(255, 255, 255)); //black
    pixels.show(); // update pixels
    delay(val);
    Serial.println(i);

//    if (i == N_PIXELS) {
//      i = 0; // start all over again!
//      setColor();
   // }

  }
}

void YELLOW() {
  for (int i = 0; i < N_PIXELS; i++) {

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(255, 255, 0));

    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(val);
  }
}

void BROWN() {
  for (int i = 0; i < N_PIXELS; i++) {

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(150, 75, 0));

    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(val);
  }
}
