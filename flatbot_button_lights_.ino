//neopixel variables
#include <Adafruit_NeoPixel.h>
#define N_PIXELS 5 // Number of pixels you are using
#define LED_PIN     6 // NeoPixel LED strand is connected to GPIO #0 / D0
Adafruit_NeoPixel  pixels = Adafruit_NeoPixel(N_PIXELS, LED_PIN, NEO_GRB + NEO_KHZ800);

int val = 20;
//colour variables
int redColor = 0;
int greenColor = 0;
int blueColor = 0;

//button variabels
const int button = 2;//attach the button on pin 2
bool buttonready = true;
bool buttonstate = false;
int lightcase = 0;

void setup() {
  pinMode(button, INPUT);
  Serial.begin(9600);// initialize serial communication:
  Checkbutton();
  pixels.begin();
  pixels.show(); // Update pixels

}//end setup

void loop() {
  Checkbutton();
  switch (lightcase) {

    case 0:
      Checkbutton();
      BLUE();
      break;

    case 1:
      Checkbutton();
      RED();
      break;

    case 2:
      Checkbutton();
      GREEN();
      break;

    case 3:
      Checkbutton();
      Christmas();
      break;

    case 4:
      Checkbutton();
      Peter();
      break;

    default:
      lightcase = 0;
      break;
  }//end switch
}//end loop
