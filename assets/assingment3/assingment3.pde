void setup() {
  size(600, 600);
  noStroke();
}

void draw() {
  float x = mouseX;
  float y = mouseY;
  float ix = width - mouseX; 
  float iy = height - mouseY; 
  background(126);
  fill(255, 0, 0);
  rect(x, height/2, y, y);
  fill(0, 0, 255);
  ellipse(ix, height/2, iy, iy);
}
