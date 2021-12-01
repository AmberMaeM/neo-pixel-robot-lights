void GREEN() {
  for (int i = 0; i < N_PIXELS; i++) {

    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0, 255, 0));

    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(val);
  }
}
