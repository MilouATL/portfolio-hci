int led = 13;
int led2 = 12;

void setup() {
    pinMode(led, OUTPUT);
    pinMode(led2, OUTPUT);

}

//void loop() {
//  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
//  delay(100);               // wait for a second
//  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
////  delay(100); 
//  {digitalWrite(led2, HIGH);
//  delay(100);
//  digitalWrite(led2, LOW);
////  delay(100);
//  }
//}

//void loop() {
//  digitalWrite(led, HIGH);
//  delay(1000);               
//  digitalWrite(led, LOW);    
//  delay(100); 
//  {digitalWrite(led2, HIGH);
//  delay(1000);
//  digitalWrite(led2, LOW);
//  delay(100);}
//}

void loop() {
  digitalWrite(led, HIGH);
  delay(500);               
  digitalWrite(led, LOW);    
  delay(500); 
  {digitalWrite(led2, HIGH);
  delay(1000);
  digitalWrite(led2, LOW);
  delay(1000);}
}
