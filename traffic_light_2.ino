void setup() {
  pinMode(8,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
}


void loop() {
  digitalWrite(8,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
 delay(5000);// Wait for 5000 millisecond(s)
  digitalWrite(8,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(13,LOW);
  delay(1000);// Wait for 1000 millisecond(s)
  digitalWrite(8,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,HIGH);
  delay(5000);// Wait for 5000 millisecond(s)
  

}
