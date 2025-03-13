
#define Button 8    // isim değiştirme işlemleri !!
#define Led 10
int buton_durumu = 0;  //başlangıçta bu değere 0 atadık 

void setup() {
  pinMode(Button,INPUT);
  pinMode(Led,OUTPUT);


}

void loop() {
  buton_durumu = digitalRead(Button); //bu bir değer döndürecek

  if(buton_durumu == 1){    // if else , butona basmak/basmamak
    digitalWrite(Led,HIGH);   //high = 5v

  }
  else {
    digitalWrite(Led,LOW);   // low = 0v
  }


}
