 
void setup() {
  // put your setup code here, to run once:

  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(2, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  
    digitalWrite(3, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  
    digitalWrite(4, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
 
    digitalWrite(5, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
 
    digitalWrite(6, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  
   digitalWrite(6,LOW);
  delay(500);
   digitalWrite(5,LOW);
  delay(500);
   digitalWrite(4,LOW);
  delay(500);
   digitalWrite(3,LOW);
  delay(500);
   digitalWrite(2,LOW);
  delay(500);
  

}
