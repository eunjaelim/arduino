// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()){
      int value = Serial.read();	
      Serial.println(value);
    
    if(value == 97)
      digitalWrite(13,HIGH); // 시리얼 모니터에 a를 입력하면 켜짐
    else
      digitalWrite(13,LOW);  // 다른 문자 입력하면 꺼짐
    
 }
}

// No Line Ending 설정 해 줄 것
