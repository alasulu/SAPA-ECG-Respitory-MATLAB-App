
  unsigned long t;
  void setup() {
    Serial.begin(230400);
  }
  void loop() {
    t = micros(); % seconds in m
      Serial.print(analogRead(A0));
      Serial.print(",");
      Serial.println(micros());
  }