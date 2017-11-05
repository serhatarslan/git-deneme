byte inByte=0;
void setup() {
  Serial.begin(115200);
  Serial1.begin(38400);
  Serial2.begin(38400);

}
 
void loop() {
  char a;
  if(Serial.available()>0){
  Serial1.print('a');
  }
//  a= a+1;

    if (Serial2.available() > 0) {
        inByte = Serial2.read();
//      for (int i=0; i <= 8; i+=1){
//      buffer[i] = Serial1.read();
//      Serial.print(buffer[i]);
//      }
        Serial.write(inByte);
        Serial.print(inByte);

        Serial.println();
      }

delay(100);//işlemin tamamlanabilmesi için gerekli bekleme süresi
}

