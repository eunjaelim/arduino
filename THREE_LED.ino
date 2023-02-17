
int RED_LIGHT = 13;
int ORANGE_LIGHT = 12;
int GREEN_LIGHT = 10;

void setup()
{
  pinMode(RED_LIGHT, OUTPUT);
  pinMode(ORANGE_LIGHT, OUTPUT);
  pinMode(GREEN_LIGHT, OUTPUT);
}

void loop()
{
  digitalWrite(RED_LIGHT, HIGH); //빨
  digitalWrite(ORANGE_LIGHT, LOW);
  digitalWrite(GREEN_LIGHT, LOW);
  delay(3000); 
  
  
  digitalWrite(ORANGE_LIGHT, HIGH); //노
  digitalWrite(RED_LIGHT, LOW);
  digitalWrite(GREEN_LIGHT, LOW);
  delay(1000); 
  
  
  digitalWrite(GREEN_LIGHT, HIGH); //초
  digitalWrite(ORANGE_LIGHT, LOW);
  digitalWrite(RED_LIGHT, LOW);
  delay(2000); 
}