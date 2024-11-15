void setup() {
  // put your setup code here, to run once:
pinMode( 5 , OUTPUT );
pinMode( A0 , INPUT );
}

void loop() {
  // put your main code here, to run repeatedly:
int ldr = analogRead(A0);

if(ldr>0 && ldr<100)
{
  digitalWrite(5,HIGH);
  delay(30000);
  digitalWrite(5,LOW);
  delay(30000);
}
else if(ldr>100 && ldr<200)
{
  digitalWrite(5,HIGH);
  delay(10000);
  digitalWrite(5,LOW);
  delay(10000);
}
else if(ldr>200 && ldr<300)
{
  digitalWrite(5,HIGH);
  delay(5000);
  digitalWrite(5,LOW);
  delay(5000);
}
else if(ldr>300 && ldr<400)
{
  digitalWrite(5,HIGH);
  delay(500);
  digitalWrite(5,LOW);
  delay(500);
}
else if(ldr>400 && ldr<500)
{
  digitalWrite(5,HIGH);
  delay(100);
  digitalWrite(5,LOW);
  delay(100);
}
else if(ldr>500 && ldr<600)
{
  digitalWrite(5,HIGH);
  delayMicroseconds(1000);
  digitalWrite(5,LOW);
  delayMicroseconds(1000);
}
else if(ldr>600 && ldr<700)
{
  digitalWrite(5,HIGH);
  delayMicroseconds(500);
  digitalWrite(5,LOW);
  delayMicroseconds(500);
}
else if(ldr>700 && ldr<800)
{
  digitalWrite(5,HIGH);
  delayMicroseconds(50);
  digitalWrite(5,LOW);
  delayMicroseconds(50);
}
else if(ldr>800 && ldr<900)
{
  digitalWrite(5,HIGH);
  delayMicroseconds(10);
  digitalWrite(5,LOW);
  delayMicroseconds(10);
}
else
{
   digitalWrite(5,HIGH);
  delayMicroseconds(1);
  digitalWrite(5,LOW);
  delayMicroseconds(1);
}
}
