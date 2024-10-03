void setup() {
 pinMode(2, OUTPUT);
 pinMode(8, OUTPUT);
 pinMode(12, OUTPUT);
}

void loop() {
 digitalWrite(2, LOW);
 digitalWrite(8, LOW);
 digitalWrite(12, HIGH);
 delay(250);
 digitalWrite(2, LOW);
 digitalWrite(8, HIGH);
 digitalWrite(12, LOW);
 delay(250);
 digitalWrite(2, HIGH);
 digitalWrite(8, LOW);
 digitalWrite(12, LOW);
 delay(250);
}
