void RandomColour() {
  setColor();

  for (int i = 0; i < N_PIXELS; i++) {

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(redColor, greenColor, blueColor));

    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(val);



    //Serial.println(i);

    if (i == N_PIXELS) {
      i = 0; // start all over again!
      setColor();
    }

  }

}
