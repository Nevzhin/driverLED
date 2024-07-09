#define potent4 A4
#define mosfet6 6

void setup() {

}

void loop() {
  
  int value4 = analogRead(potent4);
  value4 = map(value4, 0, 1023, 0, 255);
  value4 = constrain(value4, 0, 255);
  analogWrite(mosfet6, value4);

}
