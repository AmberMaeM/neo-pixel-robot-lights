void Peter() {
  for (int i = 0; i < N_PIXELS; i++) {

    pixels.setPixelColor(i++, pixels.Color(29, 5, 36)); //purp
    pixels.show(); // update pixels
    delay(val);



    pixels.setPixelColor(i, pixels.Color(255, 98, 0)); //yell
    pixels.show(); // update pixels
    delay(val);
    Serial.println(i);

    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(val);
  }
}
