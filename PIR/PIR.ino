int buzzer = 11;
int sensor = 2;
int led = 13;
void setup() 
{
  pinMode(buzzer, OUTPUT);
  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);
  
  digitalWrite(buzzer,LOW);
  digitalWrite(sensor,LOW);
  
  digitalWrite(led,LOW);

  while(millis()<13000)
  {
    digitalWrite(led,HIGH);
    delay(50);
    digitalWrite(led,LOW);
    delay(50);
  }
  digitalWrite(led,HIGH);
  
}

void loop() 
{
  if(digitalRead(sensor)==HIGH)
  {
   digitalWrite(buzzer,HIGH);
   delay(3000);
   digitalWrite(buzzer,LOW); 
   while(digitalRead(sensor)==HIGH);
  }

}
