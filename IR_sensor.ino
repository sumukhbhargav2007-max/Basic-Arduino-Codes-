  int irStatus; // ir status chages so should not use const
  const int ir= 2;  // pin are fixed so const is used 
  const int led1= 4;
  const int led2= 6;
void setup() 
{
  Serial.begin(9600);
  pinMode(ir, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() 
{
 irStatus= digitalRead(ir);
 Serial.println(irStatus);  // 1 -active high   0- active low 
 
 if(irStatus==0)
 {
 digitalWrite(led1, HIGH);
 digitalWrite(led2,LOW);

 }
  else
  {
   digitalWrite(led1, LOW);
   digitalWrite(led2, HIGH);

  }

}
