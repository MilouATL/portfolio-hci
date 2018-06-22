int n = 180;

void setup(){
size(600,600);

}

void draw(){
  background(0, 0, 0);
  fill(n);
  //ellipse(200,100,10,10);
  fill(255,220,40);
  noStroke();
  arc(75,110,90,90,PI/5,TWO_PI-PI/5);
  stroke(0,255,255);
  fill(0,255,255);
  rect(180, 90, 40, 20);
  noStroke();
  fill(255,50,0);
  triangle(40, 85, 68, 30, 96, 85);
  fill(100,100,100);
  quad(338, 331, 286, 220, 269, 263, 230, 276);
}
