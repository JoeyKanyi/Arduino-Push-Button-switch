/*
 The Arduino should read the push button switch and print on the serial monitor the curent state. 1 for ON and 0 for off
 */
void setup()
{
  pinMode(8, INPUT);
  Serial.begin(9600);//This sets the baud rate of the serial monitor
  
}

void loop()
{
  
    if (digitalRead(8) == HIGH){
      Serial.println(1);    
  }else Serial.println(0);
  delay (100);          
  }