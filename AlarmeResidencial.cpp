const int sensor1 = 11;
const int buzzer = 8 ;



void setup() {
  pinMode(sensor1, INPUT);
  pinMode(buzzer, OUTPUT);
}
 

void loop() {
  
  if (digitalRead(sensor1) == HIGH) {
    for(int tom = 1000; tom < 2000; tom++){
    tone(buzzer , tom);
    delay(3);
  }
  for(int tom = 2000; tom > 1000; tom--){
    tone(buzzer , tom);
    delay(2);
  }
    for(int tom = 1000; tom < 2000; tom++){
    tone(buzzer , tom);
    delay(3);
  }
  for(int tom = 2000; tom > 1000; tom--){
    tone(buzzer , tom);
    delay(2);
    noTone(buzzer);
  }
    
  }
  }
