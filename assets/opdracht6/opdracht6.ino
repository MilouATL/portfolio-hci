float sensorValue = 10.5; // variable for sensor value
int sensorPin = A0; // variable for sensor pin
int greenLed = 10; 
int yellowLed = 9;

void setup() {
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
  pinMode(greenLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  sensorValue = (sensorValue/1023)*255;
  analogWrite(greenLed, sensorValue);
  analogWrite(yellowLed, sensorValue);
//  int val = analogRead(0);
//  val = map(val, 0, 1023, 0, 255);
//  analogWrite(9, val);
 Serial.print("sensor = ");
 Serial.println(sensorValue); // print out sensorValue to the serial monitor
 delay(20); // delay for 0.2 seconds

 for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(greenLed, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);

      for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(greenLed, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
  }
}
