# include <Plex.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 4, 5, 6, 7, 8);

void setup() 
{
    setupPlex();
    lcd.begin(16, 2);
}

void loop() 
{
    for (int a=0; a < 8; a++)
    {
        for (int b=0; b < 8; b++)
        {
            digitalWriteA(b,LOW);
            digitalWriteB(b,LOW);
            digitalWriteC(b,LOW);
            digitalWriteD(b,LOW);
        }
        lcd.setCursor(0, 1);
        lcd.print("Output: ");
        lcd.print(a);
        digitalWriteA(a,HIGH);
        digitalWriteB(a,HIGH);
        digitalWriteC(a,HIGH);
        digitalWriteD(a,HIGH);
        delay(1000);
    }
}