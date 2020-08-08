void setup(){
//fooooooo
}
void loop(){
  if(Serial.available()){
    String s = Serial.readStringUntil('\n');
    Serial.print("-");
    Serial.print(s);
    Serial.print("-");
    Serial.println();
  }
}
 
