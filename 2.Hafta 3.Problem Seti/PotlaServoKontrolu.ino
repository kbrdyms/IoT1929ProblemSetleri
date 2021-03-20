#include <Servo.h>
Servo servo1;
Servo servo2;
#include <Joystick.h>
Joystick_ Joystick;

const int pot1 = A0;
const int pot2 = A5;

void setup() {
  servo1.attach(5);
  servo2.attach(3);
  pinMode(pot1 , INPUT);
  pinMode(pot2 , INPUT);
  Serial.begin(9600);
  Joystick.begin();
  
  
  

}

void loop() {
  int p1 = analogRead(pot1);
  int p2 = analogRead(pot2);
  p1 = map(p1 , 0 , 1023 , 0 , 255);
  p2 = map(p2 , 0 , 1023 , 0 , 255);
  Serial.print("Pot1: ");
  Serial.println(p1);

  Serial.print("Pot2: ");
  Serial.println(p2);
  delay(100);


  for(int i=0;i<=255;i+=51)
  {
      
  }

  if(p1<=85)
  {
    servo1.write(0);
      Joystick.setRxAxis(0);
  Joystick.sendState();
  }
  else if(p1>85&&p1<=170)
  {
       servo1.write(90);
         Joystick.setRxAxis(90);
  Joystick.sendState();
  }
  else if(p1>170&&p1<=255)
  {
    servo1.write(180);
      Joystick.setRxAxis(180);
  Joystick.sendState();
  }



    if(p2<=127.5)
    {
        servo2.write(0);  
          Joystick.setRyAxis(0);
  Joystick.sendState();
    }
    else if(p2>127.5&&p2<=255){
          servo2.write(180);
            Joystick.setRyAxis(180);
  Joystick.sendState();
      }


}
