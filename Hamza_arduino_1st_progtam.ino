#define led 13
bool a;
void setup() {
  // put your setup code here, to run once;
pinMode(led, OUTPUT);
pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly
 a-digitalRead(2); 
digitalWrite (led,a);
}
