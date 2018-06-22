#include <Servo.h>
Servo myServo; // Declare a servo object for us to control
int servoPin = 9; // Var for the pin the servo connects to
int pos = 0; // Var to keep track of the servo's position
int buttonPinL = 3; // Var for the pin of the left button
int buttonPinR = 2; // Var for the pin of the right button

void setup() {
 myServo.attach(servoPin); // Tell the servo to what pin it's connected to
 pinMode(buttonPinL, INPUT); // Set the left button pin to input
 pinMode(buttonPinR, INPUT); // Set the right button pin to input
}

void loop() {
 while (digitalRead(2) == HIGH && pos < 180) {
   pos++;
   myServo.write(pos);
   delay(15);
 }
 while (digitalRead(3) == HIGH && pos > 0) {
   pos--;
   myServo.write(pos);
   delay(15);
 }
}
