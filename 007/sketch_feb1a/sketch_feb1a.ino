#define led 3

void setup(){
pinMode(led,OUTPUT);
Serial.begin(9600);

}


void loop() {
int istik = analogRead(A0);
Serial.println(istik);
delay(50);
if(istik < 900){
digitalWrite(led,LOW);
}if(istik < 850){

    digitalWrite(led,HIGH);


}
}






