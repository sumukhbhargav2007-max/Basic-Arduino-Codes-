const int ledPin =13;
const int ldrPin = A0;
const int buzzer = 2;

void setup()
 {
Serial.begin(9600);
pinMode(ledPin, OUTPUT);
pinMode(ldrPin, INPUT);
pinMode(buzzer, OUTPUT);

}

void loop()
 {
int ldrStatus = analogRead(ldrPin);
if(ldrStatus <=200)
 {
  digitalWrite(ledPin, HIGH);
  digitalWrite(buzzer, HIGH);
  Serial.println("Its dark turn on the led :");
  Serial.println(ldrStatus);
 }
 else
 {
  digitalWrite(ldrPin,LOW);
  digitalWrite(buzzer, LOW);
  Serial.begin("its Bright, Turn off led :");
  Serial.println(ldrStatus);
 }

}
