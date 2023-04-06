int flag = 0;

void setup() {
  pinMode(8,OUTPUT);
  pinMode(7,INPUT);
  Serial.begin(9600);
  

}

void loop() {

  int value = digitalRead(7);

  if (value == HIGH){
    if (flag == 0)
      flag = 1;
  }
  else {
    if (flag ==1){
      flag = 0;
      int ledStatus = digitalRead(8);
      if (ledStatus == HIGH)
          digitalWrite(8,LOW);
      else
          digitalWrite(8,HIGH);    

    }
  }
  

}
