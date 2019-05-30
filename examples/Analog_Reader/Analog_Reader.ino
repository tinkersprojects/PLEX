# include <Plex.h>

Plex PLEX;      // setup plex 

void setup() 
{
    
}

void loop() 
{
    for (int i=0; i < 8; i++)
    {
        int ValueA = PLEX.analogReadA(i);    // read A at index i (e.g. A0, A1,...,A7)
        int ValueB = PLEX.analogReadB(i);    // read B at index i (e.g. B0, B1,...,B7)
        int ValueC = PLEX.analogReadC(i);    // read C at index i (e.g. C0, C1,...,C7)
        int ValueD = PLEX.analogReadD(i);    // read D at index i (e.g. D0, D1,...,D7)
        display('A', i, ValueA);        // display value.  see void display(char letter, int index, int Value) line 25
        display('B', i, ValueB);        // display value.  see void display(char letter, int index, int Value) line 25
        display('C', i, ValueC);        // display value.  see void display(char letter, int index, int Value) line 25
        display('D', i, ValueD);        // display value.  see void display(char letter, int index, int Value) line 25 
    }
}

void display(char letter, int index, int Value)
{
    PLEX.lcd.clear();               // clearing LCD
    PLEX.lcd.print("Reading: ");    // print "Reading: " to LCD
    PLEX.lcd.print(letter);         // Print the letter of input to screen
    PLEX.lcd.print(index);          // Print the number/index of input to screen
    PLEX.lcd.setCursor(0, 1);       // start printing on second line
    PLEX.lcd.print("Value: ");      // print "Value: " to LCD
    PLEX.lcd.print(Value);          // Print the value of input to screen
    delay(3000);                    // will display for 3 seconds before changing 
}