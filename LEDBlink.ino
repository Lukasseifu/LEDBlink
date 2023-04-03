int ledPin = 13;

void setup() {

  pinMode(ledPin, OUTPUT);

}

void loop() {
  
  analogWrite(ledPin, HIGH);
  delay(100);
  analogWrite(ledPin, LOW);

}
