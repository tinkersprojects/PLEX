# include <Plex.h>

void setup() 
{
    Serial.begin(9600);
    setupPlex();
}

void loop() 
{
    for (int i=0; i < 8; i++)
    {
        int Value = analogReadA(i);
        Serial.print(Value);
        Serial.print(",");
    }
    for (int i=0; i < 8; i++)
    {
        int Value = analogReadB(i);
        Serial.print(Value);
        Serial.print(",");
    }
    for (int i=0; i < 8; i++)
    {
        int Value = analogReadC(i);
        Serial.print(Value);
        Serial.print(",");
    }
    for (int i=0; i < 8; i++)
    {
        int Value = analogReadD(i);
        Serial.print(Value);
        Serial.print(",");
    }
    
    Serial.println();
}