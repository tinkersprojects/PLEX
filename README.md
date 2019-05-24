# PLEX
[https://tinkersprojects.com/](https://tinkersprojects.com/)

Arduino library for the PLEX board.
PLEX is a development board using the Arduino UNO bootloader to be easily programmed by the Arduino IDE. The board has many selectable analogue inputs and digital output (up to 32, not including LCD interface).
The board was originally designed for one project but has been used in many other projects that require a fast and simple solution. The PLEX board is the same dimensions as a 16×2 LCD and simply attaches to one.

### 32 Inputs and Outputs	
The board has up to 32 selectable analogue inputs and digital outputs not including connections to the LCD.

### Micro SD Storage	
By decreasing the inputs and outputs from 32 to 16 will allow the SD storage to be used. This can be used for controlling, data logging or any other function.

### 5V and 3.3V regulation	
Most Arduino devices use either 5V or 3.3V to power them and this board can deliver this power to them. The board can regulate up to 12V down to 5V and 3.3V.

### LCD Display	
This board is the same dimensions as a 16×2 LCD and attaches seamlessly to the back of it. Use the LiquidCrystal Arduino library with the code below to run the LCD.
```
LiquidCrystal lcd(2, 4, 5, 6, 7, 8);
```

### Micro USB interface	
The Micro USB can be used to program the Atmega328 microcontroller with the Arduino IDE. It can also be used for debugging and other serial functions

### Arduino UNO bootloader	
By using the Arduino UNO bootloader, the controller can be programmed using the Arduino IDE. This makes it easy to program, debug and make anything.

## Getting One
Get a one from [https://tinkersprojects.com/product/plex-controller/](https://tinkersprojects.com/product/plex-controller/)

# Plex Library
This library is to make it easier to control the inputs and outputs of the PLEX board. The board has 32 inputs/outputs which are grouped in 2 lots of 16. The 2 groups of inputs/outputs are controlled by 3 digital selecting pins and 2 analogue output/input pins each. This is a total of 6 selecting pins and 4 analogue pins. 
The digital selecting are used to select the pin to be controlled. The analogue pins are the reading or writing Arduino pin for the selected pin.

## Functions
#### void setupPlex();
This function is required to set all pins to the correct format. This function needs to be placed in setup before any PLEX library functions.
#### void selectA(byte A);
This function only selects a pin in A, it does not set or read the pin.
#### void selectB(byte B);
This function only selects a pin in B, it does not set or read the pin.
#### void selectC(byte C);
This function only selects a pin in C, it does not set or read the pin.
#### void selectD(byte D);
This function only selects a pin in D, it does not set or read the pin.
#### boolean digitalReadA(byte A);
This function Digitally reads the selected pin in A. The function will return either a HIGH or LOW.
#### boolean digitalReadB(byte B);
This function Digitally reads the selected pin in B. The function will return either a HIGH or LOW.
#### boolean digitalReadC(byte C);
This function Digitally reads the selected pin in C. The function will return either a HIGH or LOW.
#### boolean digitalReadD(byte D);
This function Digitally reads the selected pin in D. The function will return either a HIGH or LOW.
#### int analogReadA(byte A);
This function analogy reads the selected pin in A. The function will return a value from 0 to 1024.
#### int analogReadB(byte B);
This function analogy reads the selected pin in B. The function will return a value from 0 to 1024.
#### int analogReadC(byte C);
This function analogy reads the selected pin in C. The function will return a value from 0 to 1024.
#### int analogReadD(byte D);
This function analogy reads the selected pin in D. The function will return a value from 0 to 1024.
#### void digitalWriteA(byte A,boolean set);
This function Digitally Writes to the selected pin in A. The function will set a HIGH or LOW *boolean set* value.
#### void digitalWriteB(byte B,boolean set);
This function Digitally Writes to the selected pin in B. The function will set a HIGH or LOW *boolean set* value.
#### void digitalWriteC(byte C,boolean set);
This function Digitally Writes to the selected pin in C. The function will set a HIGH or LOW *boolean set* value.
#### void digitalWriteD(byte D,boolean set);
This function Digitally Writes to the selected pin in D. The function will set a HIGH or LOW *boolean set* value.

## Set Pins
- **PinA** A4
- **PinB** A5
- **SePinAA** 11
- **SePinAB** 12
- **SePinAC** 13
- **PinC** A3
- **PinD** A2
- **SePinBA** 9
- **SePinBB** A0
- **SePinBC** A1


## Example
### Example 1: Analog Reader

```c++
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
```

### Example 2: Digital Output

```c++
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
```

### Example 3: Menu

```c++
# include <Plex.h>

Plex PLEX;

#define UpPin 3
#define DownPin 10
#define SelectPin 11

#define NumberOfMenuItems 5
int menuLocation = 0;

typedef void (*CallbackFunction) ();
void Menu1();
void Menu2();
void Menu3();
void Menu4();
bool Menu5();

struct Menu {
    String title;
    CallbackFunction Callback; 
} MainMenu[NumberOfMenuItems] = {
    {"Menu1",Menu1},
    {"Menu2",Menu2},
    {"Menu3",Menu3},
    {"Menu4",Menu4},
    {"Menu5",Menu5},
};


void setup() 
{
    pinMode(UpPin, INPUT);
    pinMode(DownPin, INPUT);
    pinMode(SelectPin, INPUT);
    PrintMenu();
}

void loop() 
{
    if(digitalRead(UpPin)==HIGH)
    {
        menuLocation++;
        if(menuLocation >= NumberOfMenuItems)
        menuLocation=0;
        PrintMenu();
        while(digitalRead(UpPin)==HIGH);
    }

    if(digitalRead(DownPin)==HIGH)
    {
        menuLocation--;
        if(menuLocation < 0)
        menuLocation=NumberOfMenuItems-1;
        PrintMenu();
        while(digitalRead(DownPin)==HIGH);
    }

    if(digitalRead(SelectPin)==HIGH)
    {
        while(digitalRead(SelectPin)==HIGH);
        MainMenu[menuLocation].Callback();
    }
}

void PrintMenu()
{
    PLEX.lcd.clear();
    PLEX.lcd.print("Plex Menu");
    PLEX.lcd.setCursor(0, 1);
    PLEX.lcd.print(MainMenu[menuLocation].title);
}

void Menu1()
{
    PLEX.lcd.clear();
    PLEX.lcd.print("Menu 1");
    delay(3000);
}

void Menu2()
{
    PLEX.lcd.clear();
    PLEX.lcd.print("Menu 2");
    delay(3000);
}

void Menu3()
{
    PLEX.lcd.clear();
    PLEX.lcd.print("Menu 3");
    delay(3000);
}

void Menu4()
{
    PLEX.lcd.clear();
    PLEX.lcd.print("Menu 4");
    delay(3000);
}

bool Menu5()
{
    PLEX.lcd.clear();
    PLEX.lcd.print("Menu 5");
    delay(3000);
}
```
