#include <Servo.h>

Servo myServo; // Declare a servo object for us to control
int servoPin = 9; // Var for the pin the servo connects to
int pos = 0; // Var to keep track of the servo's position

void setup() {
 myServo.attach(servoPin); // Tell the servo to what pin it's connected to
}

void loop() {
 myServo.write(90);
 
 // Gaat naar rechts
 for(pos = 90; pos < 180; pos += 2){
   myServo.write(pos);
   delay(15);
 }

 // wachten
 delay(1500);

  // Gaat naar links
 for(pos = 90; pos > 11; pos -= 2){ 
  myServo.write(pos); 
  delay(15); 
 }

 // wachten
 delay(1000);

 // Take it back now naar midden
 for(pos = 11; pos <= 90; pos += 3) {
   myServo.write(pos);
   delay(15);
 }

 // wachten
 delay(1600);

// One hop this time (van links naar midden)
 for(pos = 11; pos <= 90; pos += 3) {
   myServo.write(pos);
   delay(15);
 }

//wachten
 delay(1600);

// One hop this time (van links naar midden)
 for(pos = 11; pos <= 90; pos += 1){ // Loop, pos is added to (from 160 to 0)
  myServo.write(pos); // Turn the servo to the position in pos
  delay(15); // Wait 15ms
 }

//wachten
 delay(500);
 // right foot two stomps first stomp 
 for(pos = 90; pos <= 135; pos += 2 ){ // Loop, pos is added to (from 160 to 0)
  myServo.write(pos); // Turn the servo to the position in pos
  delay(15); // Wait 15ms
 }

//wachten
 delay(500);

  // right foot two stomps second stomp 
 for(pos = 135; pos <= 170; pos += 2 ){ // Loop, pos is added to (from 160 to 0)
  myServo.write(pos); // Turn the servo to the position in pos
  delay(15); // Wait 15ms
 }

 //wachten
 delay(250);

 for(pos = 90; pos > 45; pos -= 2){ // Loop, pos is added to (from 0 to 160)
   myServo.write(pos); // Turn the servo to the position in pos
   delay(15); // Wait 15ms
 }

//wachten
 delay(250);

  // left foot two stomps first stomp 
 for(pos = 90; pos > 45; pos -= 2){ // Loop, pos is added to (from 0 to 160)
  myServo.write(pos); // Turn the servo to the position in pos
  delay(15); // Wait 15ms
 }

//wachten
 delay(250);

  // left foot two stomps second stomp 
 for(pos = 90; pos > 11; pos -= 1){ // Loop, pos is added to (from 0 to 160)
  myServo.write(pos); // Turn the servo to the position in pos
  delay(15); // Wait 15ms
 }


//wachten
 delay(250);
 
//slide to the left
  for(pos = 10; pos > 170; pos -= 3){ // Loop, pos is added to (from 0 to 160)
  myServo.write(pos); // Turn the servo to the position in pos
  delay(15); // Wait 15ms
 }

  delay(250);

 //slide to the right
  for(pos = 90; pos > 170; pos -= 1){ // Loop, pos is added to (from 0 to 160)
  myServo.write(pos); // Turn the servo to the position in pos
  delay(15); // Wait 15ms
 }

 delay(250);
//crisscross
    for(pos = 10; pos > 170; pos -= 3){ // Loop, pos is added to (from 0 to 160)
  myServo.write(pos); // Turn the servo to the position in pos
  delay(15); // Wait 15ms
 }
 delay(250);
// crisscross
    for(pos = 10; pos > 170; pos -= 3){ // Loop, pos is added to (from 0 to 160)
  myServo.write(pos); // Turn the servo to the position in pos
  delay(15); // Wait 15ms
 }

}



//Now it's time to get funky
//To the right now, to the left
//Take it back now y'all
//One hop this time, one hop this time
//Right foot two stomps, left foot two stomps
//Slide to the left, slide to the right
//Criscross, criscross
//Cha cha real smooth

