const int ledPin1 = 9;
const int ledPin2 = 10;

const int ldrPin = A0;

void setup() {

Serial.begin(9600);

pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);


pinMode(ldrPin, INPUT);

}

void loop() {

int ldrStatus = analogRead(ldrPin);

if (ldrStatus <=300) {

digitalWrite(ledPin1, HIGH);
digitalWrite(ledPin2, HIGH);


Serial.println("LDR is DARK, LED is ON");

}

else {

digitalWrite(ledPin1, LOW);
digitalWrite(ledPin2, LOW);


Serial.println("---------------");

}

}
