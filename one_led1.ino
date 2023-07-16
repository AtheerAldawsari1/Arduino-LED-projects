
void setup()
{
  
  pinMode(2, OUTPUT);
  pinMode(13,OUTPUT);
}

void loop()
{
  if(digitalRead(2) == 1)
  {
  digitalWrite(13, HIGH);
  }
  else
  {
    digitalWrite(13,LOW);
  }
}