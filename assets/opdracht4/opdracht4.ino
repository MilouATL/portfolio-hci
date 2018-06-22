int greenLed = 10;
int yellowLed = 9;

void setup() {
 pinMode(greenLed, OUTPUT);
 pinMode(yellowLed, OUTPUT);
}

void loop() {
  for (int brightness=0; brightness <256; brightness++){
    analogWrite(greenLed, brightness);
    analogWrite(yellowLed, 255 - brightness);
    delay(15);
  }
}


