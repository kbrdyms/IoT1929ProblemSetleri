
int led=2;
int dc=3;
int pot=A0;
void setup()
{
  pinMode(dc, OUTPUT);
  pinMode(pot,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int hiz=analogRead(pot);
  int a=map(hiz,0,1023,0,255);
  analogWrite(dc,a);
  int rpm=map(a,0,255,0,5555);
  Serial.print("Hiz: ");
  Serial.println(rpm);
  delay(1000);
  if(a>=3000)
  {
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }
}
