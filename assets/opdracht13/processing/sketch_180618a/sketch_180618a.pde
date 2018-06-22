import processing.serial.*;
Serial myPort;
String sensorRaw=""; float[] ypr = new float[3];
PFont font;
void setup() {
size(600, 600, P3D);
myPort = new Serial(this, Serial.list()[1], 115200); // instead of 5, choose what even serial port the Arduino connects to
myPort.bufferUntil('\n');
font = createFont(PFont.list()[2], 16); textFont(font);
}
void draw() { 
  background(0); 
  fill(255, 200, 0); 
  lights();
String[] temp = split(sensorRaw, '\t'); 
printArray(temp);
if (temp[0].equals("ypr")){
ypr[0] = float(temp[1]); // yaw 
ypr[1] = float(temp[2]); // pitch 
ypr[2] = float(temp[3]); // roll
text("yaw: " + ypr[0], 20, 20); text("pitch: " + ypr[1], 140, 20); text("roll: " + ypr[2], 270, 20);
} pushMatrix();
translate(width/2, height/2, 0); 
rotateY(radians(-ypr[0])); 
rotateZ(radians(-ypr[1])); 
rotateX(radians(-ypr[2])); 
box(150);
popMatrix(); }
void serialEvent (Serial myPort) { sensorRaw = myPort.readStringUntil('\n');
}
