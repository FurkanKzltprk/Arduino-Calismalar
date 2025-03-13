//13.ledin ışığını açıp kapatma
// loop() metodu döngüye sokar 
// High = aç , Low = kapat güç verme gibi düşün
// delay = gecikme süresi , 1000ms = 1saniye


void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH); 
  delay(1000);                      
  digitalWrite(13, LOW);   
  delay(1000);                      
}
