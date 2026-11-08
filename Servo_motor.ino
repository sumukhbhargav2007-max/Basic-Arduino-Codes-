# include <Servo.h>
int i;
Servo myServo;
 void setup()
 {
  serial.brgin(9600);
 myServo.attach(9);

 }

 void loop()
 {
 for(i=0;i<=180;i++)
 {
  myServo.write(i);
  delay(20);
 }
 for(i=180;i>=0;i--)
 {
  myServo.write(i);
  delay(20);
 }
 }