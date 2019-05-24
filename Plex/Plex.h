/*
  Plex.h - Library for Plex board.
  Created by William Bailes, May 22, 2019.
  Released into the public domain.
*/

#ifndef Plex_h
#define Plex_h

#if ARDUINO >= 100
#include <Arduino.h>
#else
#include <WProgram.h>
#endif

#include <LiquidCrystal.h>

#define PinA A4
#define PinB A5
#define SePinAA 11
#define SePinAB 12
#define SePinAC 13

#define PinC A3
#define PinD A2
#define SePinBA 9
#define SePinBB A0
#define SePinBC A1

#define SD_CS 10

#define LCD_RS 2
#define LCD_EN 4
#define LCD_D4 5
#define LCD_D5 6
#define LCD_D6 7
#define LCD_D7 8

class Plex
{
  public:
    LiquidCrystal &lcd = *new LiquidCrystal(LCD_RS, LCD_EN, LCD_D4, LCD_D5, LCD_D6, LCD_D7);;

    Plex();
    void begin();
    void selectA(byte A);
    void selectB(byte B);
    void selectC(byte C);
    void selectD(byte D);
    boolean digitalReadA(byte A);
    boolean digitalReadB(byte B);
    boolean digitalReadC(byte C);
    boolean digitalReadD(byte D);
    int analogReadA(byte A);
    int analogReadB(byte B);
    int analogReadC(byte C);
    int analogReadD(byte D);
    void digitalWriteA(byte A,boolean set);
    void digitalWriteB(byte B,boolean set);
    void digitalWriteC(byte C,boolean set);
    void digitalWriteD(byte D,boolean set);

  private:
    void selectLeft(byte number);
    void selectRight(byte number);       
};

#endif 
