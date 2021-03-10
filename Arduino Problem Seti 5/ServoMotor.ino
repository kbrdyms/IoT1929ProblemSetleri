#include <Servo.h>

Servo servo;
void setup() {
  servo.attach(3);

}

void loop() {


 for(int i=0;i<=180;i+=15)
 {
     servo.write(i);
     delay(1000);
     servo.write(i-30);
     delay(1000);
 }

}
