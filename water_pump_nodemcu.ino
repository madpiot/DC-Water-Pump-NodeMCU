/***************************************************************
 * COMPONENT TEST PROGRAM   : DC WATER PUMP
 * BOARD                    : NodeMCU 
 * INPUT                    : Serial Monitor
 * OUTPUT                   : WATER PUMP (RELAY)
 * TEST ENGINEER            : RABBANI BASHA
 * HARDWARE ENGINEER        : VENKATESH R
 * PROGRAMMER               : MADHU PARVATHANENI
 * ORGANIZATION             : MADHU HARDWARE GROUP
 * DATE                     : 23rd DEC 2018
 ****************************************************************/
// Port Declaration
int water_pump=D2;

void setup() 
{
 pinMode(water_pump,OUTPUT); // RELAY IN
 Serial.begin(9600);
 Serial.println("WELCOME TO DC WATER PUMP TEST");
}

void loop() 
{
 Serial.println("PRESS 1 for WATER PUMP ON");
 Serial.println("PRESS 2 for WATER PUMP OFF");
 while(Serial.available()==0);
 while(Serial.available())
 {
  char ch=Serial.read();
  if(ch=='1')
  {
    Serial.println("WATER PUMP ON");
    digitalWrite(water_pump,HIGH);
  }
  else if(ch=='2')
  {
    Serial.println("WATER PUMP OFF");
    digitalWrite(water_pump,LOW);
  }
 }
}
