void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);

}

void loop() {
  int analogValue = analogRead(A0);
  Serial.println(analogValue);
  if (analogValue < 100){
    digitalWrite(13,HIGH);
  }
  else
    digitalWrite(13,LOW);

}
