# define sensor 34 
# define LED 2 
void setup ()  
{ 
Serial.begin(115200); 
pinMode(LED,OUTPUT); 
pinMode(sensor,INPUT); 
}
void loop()  
{ 
int sense_it = analogRead(sensor); 
Serial.print("Soil Value: "); 
Serial.println(sense_it); 
if(sense_it > 3500) 
{ 
Serial.println("status: DRY SOIL"); 
delay(1000); 
} 
else if (sense_it <=3500 && sense_it > 1500) 
{ 
Serial.println("Status: MOIST SOIL"); 
delay(1000); 
} 
else  
{ 
(Serial.println("Status: WET SOIL")); 
digitalWrite(LED,HIGH); 
delay(1000); 
digitalWrite(LED,LOW); 
delay(1000);  
} 
}
