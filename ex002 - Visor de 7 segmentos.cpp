// Link: https://www.tinkercad.com/things/9bQZbIieeu2-ex-002/

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void num(int n){
  if (n != 1 && n!= 4) // a
  	digitalWrite(1, HIGH);
  
  if (n != 5 && n != 6)   // b
  	digitalWrite(2, HIGH);
  
  if (n != 2)             // c
  	digitalWrite(3, HIGH);
  
  if (n != 1 && n != 4 && n != 7)  // d
  	digitalWrite(4, HIGH);
  
  if (n == 0 || n == 2 || n == 6 || n == 8) // e 
  	digitalWrite(5, HIGH);
  
  if (n != 0 && n != 1 && n != 7)
  	digitalWrite(6, HIGH);
  
  if (n != 1 && n != 2 && n != 3 && n != 7)
  	digitalWrite(7, HIGH);
}

void clear(){
  for (int i = 1; i <= 7; i++)
  {
   digitalWrite(i, LOW);
  }
}

void loop()
{
  for (int i = 0; i <= 9; i++)
  {
    num(i);
    delay(500);
    clear();
  }
}
