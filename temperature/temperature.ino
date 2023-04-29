// C++ code
//
void setup()
{
  Serial.begin(9600);
  
}

void loop()
{
  int value = analogRead(A0); 
  float voltage = value * 5.0 / 1024.0;
  float temperature = voltage *100 - 50;
  Serial.println(temperature);
  delay(100);
  
}