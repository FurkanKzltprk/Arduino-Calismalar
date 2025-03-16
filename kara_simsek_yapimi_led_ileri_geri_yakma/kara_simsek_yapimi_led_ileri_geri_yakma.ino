int ledler [] = {2,3,4,5,6,7}; // ledleri pinlere bağladığımız yerler.

//tek tek yazmak yerine for döngüsü içerisinde yazıyoruz
void setup(){
for(int i =0; i<6;i++){
  pinMode(ledler[i],OUTPUT);
  
}

}

void loop(){
for(int j=0 ; j<6 ; j++){
  digitalWrite(ledler[j],HIGH);  //ileri doğru yak
  delay(50);
  digitalWrite(ledler[j],LOW);
}
for (int k=5 ; k>= 0 ; k--){
 digitalWrite(ledler[k],HIGH);  //geri doğru yak
  delay(50);
  digitalWrite(ledler[k],LOW);

}


}