# include <Plex.h>

Plex PLEX;

void setup() 
{
}

void loop() 
{
    for (int a=0; a < 8; a++)
    {
        for (int b=0; b < 8; b++)
        {
            PLEX.digitalWriteA(b,LOW);
            PLEX.digitalWriteB(b,LOW);
            PLEX.digitalWriteC(b,LOW);
            PLEX.digitalWriteD(b,LOW);
        }
        PLEX.lcd.setCursor(0, 1);
        PLEX.lcd.print("Output: ");
        PLEX.lcd.print(a);
        PLEX.digitalWriteA(a,HIGH);
        PLEX.digitalWriteB(a,HIGH);
        PLEX.digitalWriteC(a,HIGH);
        PLEX.digitalWriteD(a,HIGH);
        delay(1000);
    }
}