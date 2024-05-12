#define potent3 A3
#define potent4 A4
#define potent5 A5
#define mosfet3 3
#define mosfet5 5
#define mosfet6 6

unsigned long timer;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value5 = analogRead(potent5);
  value5 = map(value5, 0, 1023, 0, 255);
  value5 = constrain(value5, 0, 255);
  analogWrite(mosfet5, value5);
  
  int value4 = analogRead(potent4);
  value4 = map(value4, 0, 1023, 0, 255);
  value4 = constrain(value4, 0, 255);
  analogWrite(mosfet6, value4);
  
  int value3 = analogRead(potent3);
  value3 = map(value3, 0, 1023, 0, 255);
  value3 = constrain(value3, 0, 255);
  analogWrite(mosfet3, value3);

  if (millis()-timer > 100) {
    Serial.print("mosfet3 = ");
    Serial.println(value3);
    Serial.print("potent5 = ");
    Serial.println(value5);
    Serial.print("mosfet6 = ");
    Serial.println(value4);
    Serial.println("");

    timer = millis();
  }
}
