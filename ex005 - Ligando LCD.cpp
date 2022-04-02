// Link: https://www.tinkercad.com/things/jRDMGSuHOJo-ex005

#include "LiquidCrystal.h"
#include "string.h"

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
char nome[] = "Coloque uma frase";
int tam = strlen(nome);
int cont = 0;
int numsei = 0;
int dist = 5;
  
void setup()
{
  lcd.begin(16,2);
  lcd.clear();
}

void loop()
{
  lcd.clear();
  lcd.setCursor(0,0);
  for(int i = cont; i < tam; i++)
  {
    lcd.print(nome[i]);
    if (cont == tam - 1)
      numsei = 1;
  }
  
  for(int i = 0; i < dist; i++)
  {
    lcd.print(' ');
  }
  
  for(int i = 0; i < tam; i++)
  {
    lcd.print(nome[i]);
  }
  
  delay(500);
  cont++;
  
  if (numsei == 1)
    dist--;
  
  if (dist <= 0){
    cont = 0;
    numsei = 0;
    dist = 5;
  }
} 
