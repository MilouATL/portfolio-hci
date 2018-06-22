float sensorValue = 0; // variable for sensor value
int sensorPin = A0;      // variable for sensor pin 
int greenLed = 10;       // variable for green LED pin 
 
void setup() {   
   Serial.begin(9600);            // Start the Serial connection at a                                   
  // speed of 9600 bps   
  pinMode(sensorPin, INPUT);     // Input pin for potmeter or LDR   
  pinMode(greenLed, OUTPUT);     // Output pin for LED 
} 
 
void loop() {   
  sensorValue = analogRead(sensorPin);  // Read the value/current on the sensor pin and
  // store that value in the variable sensorValue   
  //sensorValue = (sensorValue/1023)*255; // Rescale the sensor's value. Change
  // to calibrate the sensor.   

  sensorValue = map(sensorValue, 130, 490, 2, 100);
  sensorValue = constrain(sensorValue, 2, 100);
  
  analogWrite(greenLed, sensorValue);   // Send power to LED   
  Serial.println(sensorValue);          // Print the sensorValue to tht serial
  // connection     
  delay(100);                           // Wait 0.1 seconds 
}
