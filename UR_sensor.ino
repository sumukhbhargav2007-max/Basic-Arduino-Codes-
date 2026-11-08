int echoPin =2;    // other method of defining or declaring...#define echoPin 2
int trigPin =5;
int led = 7;
int buzzer =11;


float distance;
long duration;

void setup()
{
Serial.begin(9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(led, OUTPUT);
pinMode(buzzer, OUTPUT);
}

void loop()
{
 digitalWrite(trigPin, LOW);
 delayMicroseconds(3);
 digitalWrite(echoPin, HIGH);
 delayMicroseconds(15);

 duration= pulseIn(echoPin, HIGH);
 distance= 0.0341*duration/2;
 Serial.println(distance);      //ln is used to print thr o/p in new lines..one below the other 
 delay(15);

 if(distance<=100)
 {
  digitalWrite(buzzer, HIGH);
  tone(buzzer, 45000);
  digitalWrite(led, HIGH);
  
  if(distance<30)
  {
    tone(buzzer, 65000);
  }
  
  delayMicroseconds(10);
 }

 else
 {
  digitalWrite(buzzer, LOW);
  digitalWrite(led, LOW);
  tone(buzzer, 0);
 }

}
