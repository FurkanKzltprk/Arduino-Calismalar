#define led 3 

void setup(){

pinMode(led,OUTPUT);
Serial.begin(9600);

}


void loop(){

   int isik = analogRead(A0);
  Serial.println(isik);
  delay(100);
  if(isik > 200){
    digitalWrite(led,LOW);
  }
  if (isik < 200) {
    digitalWrite(led,HIGH);
  }

}