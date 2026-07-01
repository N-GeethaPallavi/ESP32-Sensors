# define touchsensor 4 
int buzz = 13 ; 
void setup () { 
pinMode (touchsensor,INPUT); 
pinMode (buzz,OUTPUT); 
Serial.begin(115200); 
} 
void loop () { 
int state = digitalRead(touchsensor); 
if (state == HIGH) 
{ 
digitalWrite(buzz,HIGH ); 
delay(500); 
digitalWrite(buzz,LOW); 
delay(500);
}
}
