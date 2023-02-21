// C++ code
//
void setup()
{
  pinMode(8, OUTPUT);
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int value = digitalRead(2); // HIGH => 1 / LOW =>0
  Serial.println(value);
  
  if (value == HIGH)
    digitalWrite(8,HIGH);
  else
    digitalWrite(8,LOW);
   
 
}