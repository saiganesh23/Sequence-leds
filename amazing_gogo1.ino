void setup()
{
  //Pin assignment
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  int i=0;
  for (i=0; i<=8 ;i++){
    digitalWrite(i, HIGH);
    delay(1500); //delay of 1500 milliseconds
    digitalWrite(i,LOW);}
  
}
