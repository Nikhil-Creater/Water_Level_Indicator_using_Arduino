int red=7;
int blue=8;
int yellow=11;
int orange=12;
int buzzer=13;
void setup() {
  
pinMode(red,OUTPUT);
pinMode(blue,OUTPUT);
pinMode(yellow,OUTPUT);
pinMode(orange,OUTPUT);
pinMode(buzzer,OUTPUT);
pinMode(10,OUTPUT);
Serial.begin(9600);
}

void loop() {
int sensor=analogRead(A5);
Serial.println(sensor);


if(sensor<=70){
  digitalWrite(red,HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(blue,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(orange,LOW);
  digitalWrite(buzzer,HIGH);
  delay(100);
}
else if(sensor>70 && sensor<=225){ 
  digitalWrite(blue,HIGH);
  digitalWrite(red,LOW);
  digitalWrite(10, HIGH);
  digitalWrite(yellow,LOW);
  digitalWrite(orange,LOW);
  digitalWrite(buzzer,LOW);
  delay(100);
}
else if(sensor>225 && sensor<=320){
  digitalWrite(yellow,HIGH);
  digitalWrite(red,LOW);
  digitalWrite(10, HIGH);
  digitalWrite(blue,LOW);
  digitalWrite(orange,LOW);
  digitalWrite(buzzer,LOW);
  delay(100);
}
else if(sensor>370 && sensor<=430){
  digitalWrite(orange,HIGH);
  digitalWrite(red,LOW);
  digitalWrite(10, LOW);
  digitalWrite(blue,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(buzzer,LOW);
}
delay(100);
}
