# PLEX
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
The digital selecting are used to select the pin to be controlled. The analogue pins are the reading or writing arduino pin for the selected pin.

## Fuctions
#### void setupPlex();
This fuction is required to set all pins to the corret format. This fuction needs to be placed in setup before any PLEX library fuctions.
#### void selectA(byte A);
This fuction only selects a pin in A, it doea not set or read the pin.
#### void selectB(byte B);
This fuction only selects a pin in B, it doea not set or read the pin.
#### void selectC(byte C);
This fuction only selects a pin in C, it doea not set or read the pin.
#### void selectD(byte D);
This fuction only selects a pin in D, it doea not set or read the pin.
#### boolean digitalReadA(byte A);
This fuction Digitaly reads the selected pin in A. The fuction will return either a HIGH or LOW.
#### boolean digitalReadB(byte B);
This fuction Digitaly reads the selected pin in B. The fuction will return either a HIGH or LOW.
#### boolean digitalReadC(byte C);
This fuction Digitaly reads the selected pin in C. The fuction will return either a HIGH or LOW.
#### boolean digitalReadD(byte D);
This fuction Digitaly reads the selected pin in D. The fuction will return either a HIGH or LOW.
#### int analogReadA(byte A);
This fuction analogy reads the selected pin in A. The fuction will return a value from 0 to 1024.
#### int analogReadB(byte B);
This fuction analogy reads the selected pin in B. The fuction will return a value from 0 to 1024.
#### int analogReadC(byte C);
This fuction analogy reads the selected pin in C. The fuction will return a value from 0 to 1024.
#### int analogReadD(byte D);
This fuction analogy reads the selected pin in D. The fuction will return a value from 0 to 1024.
#### void digitalWriteA(byte A,boolean set);
This fuction Digitaly Writes to the selected pin in A. The fuction will set a HIGH or LOW *boolean set* value.
#### void digitalWriteB(byte B,boolean set);
This fuction Digitaly Writes to the selected pin in B. The fuction will set a HIGH or LOW *boolean set* value.
#### void digitalWriteC(byte C,boolean set);
This fuction Digitaly Writes to the selected pin in C. The fuction will set a HIGH or LOW *boolean set* value.
#### void digitalWriteD(byte D,boolean set);
This fuction Digitaly Writes to the selected pin in D. The fuction will set a HIGH or LOW *boolean set* value.

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
#include <Plex.h>

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
```

### Example 2: Digital Output

```c++
#include <Plex.h>
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
```

# To Do list
- Simpler LCD control
- Make selecting faster
- Make library lighter
