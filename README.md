#PLEX
Arduino library for the PLEX board.
PLEX is a development board using the Arduino UNO bootloader to be easily programmed by the Arduino IDE. The board has many selectable analogue inputs and digital output (up to 32, not including LCD interface).
The board was originally designed for one project but has been used in many other projects that require a fast and simple solution. The PLEX board is the same dimensions as a 16×2 LCD and simply attaches to one.

###32 Inputs and Outputs	
The board has up to 32 selectable analogue inputs and digital outputs not including connections to the LCD.

###Micro SD Storage	
By decreasing the inputs and outputs from 32 to 16 will allow the SD storage to be used. This can be used for controlling, data logging or any other function.

###5V and 3.3V regulation	
Most Arduino devices use either 5V or 3.3V to power them and this board can deliver this power to them. The board can regulate up to 12V down to 5V and 3.3V.

###LCD Display	
This board is the same dimensions as a 16×2 LCD and attaches seamlessly to the back of it.

###Micro USB interface	
The Micro USB can be used to program the Atmega328 microcontroller with the Arduino IDE. It can also be used for debugging and other serial functions

###Arduino UNO bootloader	
By using the Arduino UNO bootloader, the controller can be programmed using the Arduino IDE. This makes it easy to program, debug and make anything.

##Getting One
Get a one from [https://tinkersprojects.com/product/plex-controller/](https://tinkersprojects.com/product/plex-controller/)

#Plex Library
This library is to make it easier to control the inputs and outputs of the PLEX board. The board has 32 inputs/outputs which are grouped in 2 lots of 16. The 2 groups of inputs/outputs are controlled by 3 digital selecting pins and 2 analogue output/input pins each. This is a total of 6 selecting pins and 4 analogue pins. 
The digital selecting are used to select the pin to be controlled. The analogue pins are the reading or writing arduino pin for the selected pin.

##Fuctions
####void setupPlex();

####void selectA(byte A);

####void selectB(byte B);

####void selectC(byte C);

####void selectD(byte D);

####boolean digitalReadA(byte A);

####boolean digitalReadB(byte B);

####boolean digitalReadC(byte C);

####boolean digitalReadD(byte D);

####int analogReadA(byte A);

####int analogReadB(byte B);

####int analogReadC(byte C);

####int analogReadD(byte D);

####void digitalWriteA(byte A,boolean set);

####void digitalWriteB(byte B,boolean set);

####void digitalWriteC(byte C,boolean set);

####void digitalWriteD(byte D,boolean set);

##Set Pints

####PinA A4

####PinB A5

####SePinAA 11

####SePinAB 12

####SePinAC 13

####PinC A3

####PinD A2

####SePinBA 9

####SePinBB A0

####SePinBC A1


##Example
###Example 1: Analog Reader

```c++
#include <Plex.h>

void setup() 
{
setupPlex();
//LiquidCrystal lcd(2, 4, 5, 6, 7, 8);
}

void loop() 
{

}
```

###Example 2: Digital Output

```c++
#include <Plex.h>

void setup() 
{
setupPlex();
//LiquidCrystal lcd(2, 4, 5, 6, 7, 8);
}

void loop() 
{

}
```

#To Do list
- Simpler LCD control
- Make selecting faster
