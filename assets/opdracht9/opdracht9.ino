int ledPin = 13;
int buttonPinL = 3;
int buttonPinR = 2;

void setup() {
 pinMode(ledPin, OUTPUT);
 pinMode(buttonPinL, INPUT);
 pinMode(buttonPinR, INPUT);
}
void loop(){
  if (digitalRead(buttonPinL) == HIGH || (digitalRead(buttonPinR) == HIGH)){
    // turn LED on:
  if (!(digitalRead(buttonPinL) == HIGH && (digitalRead(buttonPinR) == HIGH))){
    digitalWrite(ledPin, HIGH);  
    }
    else { 
       digitalWrite(ledPin, LOW);  

      }  
    } else { 
    digitalWrite(ledPin, LOW);  

      }  
 }  
