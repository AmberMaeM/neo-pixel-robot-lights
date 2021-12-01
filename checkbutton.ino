void Checkbutton() {

  buttonstate = digitalRead(2);

  if ((buttonstate) && (buttonready)) {
    lightcase = lightcase + 1;
    buttonready = false;
  }

  if (buttonstate == false) {
    buttonready = true;
  }


  Serial.print("Number: ");
  Serial.println(lightcase);

}
