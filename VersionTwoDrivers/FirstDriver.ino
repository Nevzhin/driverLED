#define potent3 A3
#define potent5 A5
#define mosfet3 3
#define mosfet5 5

void setup() {

}

void loop() {

  int value5 = analogRead(potent5);
  value5 = map(value5, 0, 1023, 0, 255);
  value5 = constrain(value5, 0, 255);
  analogWrite(mosfet5, value5);
  
  int value3 = analogRead(potent3);
  value3 = map(value3, 0, 1023, 0, 255);
  value3 = constrain(value3, 0, 255);
  analogWrite(mosfet3, value3);

}
