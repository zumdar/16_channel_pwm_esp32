
const int ledPins[16] = {5, 12, 13, 14, 15, 16, 17, 18, 19, 21, 22, 23, 25, 26, 27, 32};
int pinCount = 16;

// setting PWM properties
const int freq = 5000;
const int ledChannel = 0;
const int resolution = 8;

void setup() {
  // configure LED PWM functionalitites
  ledcSetup(ledChannel, freq, resolution);

  // attach the channel to the GPIO to be controlled
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    ledcAttachPin(ledPins[thisPin], ledChannel);
  }
}

void loop() {
  // iterate over the pins:
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    // fade the LED on thisPin from off to brightest:
    for (int brightness = 0; brightness < 255; brightness++) {
      ledcWrite(ledChannel, brightness);
      delay(2);
    }
    // fade the LED on thisPin from brightest to off:
    for (int brightness = 255; brightness >= 0; brightness--) {
      ledcWrite(ledChannel, brightness);
      delay(2);
    }
    // pause between LEDs:
    delay(100);
  }
}
