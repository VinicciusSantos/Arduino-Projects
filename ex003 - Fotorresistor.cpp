// Link: https://www.tinkercad.com/things/20LgPICFRxc-ex003

int ledPin1 = 10;
int ledPin2 = 11;
int ledPin3 = 12;
int ledPin4 = 13;
int LDR = A0; 

void setup ()
{
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT); 
  pinMode(ledPin3, OUTPUT); 
  pinMode(ledPin4, OUTPUT); 
}

void loop ()
{
  int estado = analogRead(LDR); 
  
  if (estado > 650)
    digitalWrite(ledPin1, HIGH); 
  else
    digitalWrite(ledPin1, LOW); 
  
  if (estado > 750)
    digitalWrite(ledPin2, HIGH); 
  else
    digitalWrite(ledPin2, LOW); 
  
  if (estado > 850)
    digitalWrite(ledPin3, HIGH); 
  else
    digitalWrite(ledPin3, LOW); 
  
  if (estado > 950)
    digitalWrite(ledPin4, HIGH); 
  else
    digitalWrite(ledPin4, LOW); 
}
