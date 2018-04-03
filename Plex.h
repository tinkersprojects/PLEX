/*
  Plex.h - Library for Plex board.
  Created by William Bailes, May 24, 2017.
  Released into the public domain.
*/

#ifndef Plex_h
#define Plex_h

#include "Arduino.h"
#include "Plex_lcd.h"
//#include <LiquidCrystal.h>

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

void setupPlex();
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




#endif

