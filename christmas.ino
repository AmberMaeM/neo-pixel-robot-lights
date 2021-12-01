void Christmas() {

  setColor();
  for (int i = 0; i < N_PIXELS; i++) {

    pixels.setPixelColor(i++, pixels.Color(255, 0, 0)); //red
    pixels.show(); // update pixels
    delay(val);



    pixels.setPixelColor(i - 10, pixels.Color(0, 0, 255)); //green
    pixels.show(); // update pixels
    delay(val);
    Serial.println(i);

    if (i == N_PIXELS) {
      i = 0; // start all over again!
      setColor();
    }

  }
}
