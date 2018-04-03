/*
  Plex.cpp - Library for Plex board.
  Created by William Bailes, May 24, 2017.
  Released into the public domain.
*/
#include "Plex.h"

void setupPlex()
{
  pinMode(SePinAA, OUTPUT);
  pinMode(SePinAB, OUTPUT);
  pinMode(SePinAC, OUTPUT);
  
  pinMode(SePinBA, OUTPUT);
  pinMode(SePinBB, OUTPUT);
  pinMode(SePinBC, OUTPUT);

}



void digitalWriteA(byte A, boolean set)
{
  
  pinMode(PinA, OUTPUT);
  switch (A) {
    case 6:
      digitalWrite(SePinAA, LOW);
      digitalWrite(SePinAB, LOW);
      digitalWrite(SePinAC, LOW);
      break;
    case 5:
      digitalWrite(SePinAA, HIGH);
      digitalWrite(SePinAB, LOW);
      digitalWrite(SePinAC, LOW);
      break;
    case 4:
      digitalWrite(SePinAA, LOW);
      digitalWrite(SePinAB, HIGH);
      digitalWrite(SePinAC, LOW);
      break;
    case 7:
      digitalWrite(SePinAA, HIGH);
      digitalWrite(SePinAB, HIGH);
      digitalWrite(SePinAC, LOW);
      break;
    case 3:
      digitalWrite(SePinAA, LOW);
      digitalWrite(SePinAB, LOW);
      digitalWrite(SePinAC, HIGH);
      break;
    case 0:
      digitalWrite(SePinAA, HIGH);
      digitalWrite(SePinAB, LOW);
      digitalWrite(SePinAC, HIGH);
      break;
    case 2:
      digitalWrite(SePinAA, LOW);
      digitalWrite(SePinAB, HIGH);
      digitalWrite(SePinAC, HIGH);
      break;
    case 1:
      digitalWrite(SePinAA, HIGH);
      digitalWrite(SePinAB, HIGH);
      digitalWrite(SePinAC, HIGH);
      break;
  }
  digitalWrite(PinA,set);
}



void digitalWriteB(byte B, boolean set)
{
  pinMode(PinB, OUTPUT);
  switch (B) {
    case 6:
      digitalWrite(SePinAA, LOW);
      digitalWrite(SePinAB, LOW);
      digitalWrite(SePinAC, LOW);
      break;
    case 5:
      digitalWrite(SePinAA, HIGH);
      digitalWrite(SePinAB, LOW);
      digitalWrite(SePinAC, LOW);
      break;
    case 4:
      digitalWrite(SePinAA, LOW);
      digitalWrite(SePinAB, HIGH);
      digitalWrite(SePinAC, LOW);
      break;
    case 7:
      digitalWrite(SePinAA, HIGH);
      digitalWrite(SePinAB, HIGH);
      digitalWrite(SePinAC, LOW);
      break;
    case 3:
      digitalWrite(SePinAA, LOW);
      digitalWrite(SePinAB, LOW);
      digitalWrite(SePinAC, HIGH);
      break;
    case 0:
      digitalWrite(SePinAA, HIGH);
      digitalWrite(SePinAB, LOW);
      digitalWrite(SePinAC, HIGH);
      break;
    case 2:
      digitalWrite(SePinAA, LOW);
      digitalWrite(SePinAB, HIGH);
      digitalWrite(SePinAC, HIGH);
      break;
    case 1:
      digitalWrite(SePinAA, HIGH);
      digitalWrite(SePinAB, HIGH);
      digitalWrite(SePinAC, HIGH);
      break;
  }
  digitalWrite(PinB,set);
}

void digitalWriteC(byte C, boolean set)
{
  pinMode(PinC, OUTPUT);
  switch (C) {
    case 1:
      digitalWrite(SePinBA, LOW);
      digitalWrite(SePinBB, LOW);
      digitalWrite(SePinBC, LOW);
      break;
    case 2:
      digitalWrite(SePinBA, HIGH);
      digitalWrite(SePinBB, LOW);
      digitalWrite(SePinBC, LOW);
      break;
    case 3:
      digitalWrite(SePinBA, LOW);
      digitalWrite(SePinBB, HIGH);
      digitalWrite(SePinBC, LOW);
      break;
    case 0:
      digitalWrite(SePinBA, HIGH);
      digitalWrite(SePinBB, HIGH);
      digitalWrite(SePinBC, LOW);
      break;
    case 4:
      digitalWrite(SePinBA, LOW);
      digitalWrite(SePinBB, LOW);
      digitalWrite(SePinBC, HIGH);
      break;
    case 7:
      digitalWrite(SePinBA, HIGH);
      digitalWrite(SePinBB, LOW);
      digitalWrite(SePinBC, HIGH);
      break;
    case 5:
      digitalWrite(SePinBA, LOW);
      digitalWrite(SePinBB, HIGH);
      digitalWrite(SePinBC, HIGH);
      break;
    case 6:
      digitalWrite(SePinBA, HIGH);
      digitalWrite(SePinBB, HIGH);
      digitalWrite(SePinBC, HIGH);
      break;
  }
  digitalWrite(PinC,set);
}

void digitalWriteD(byte D, boolean set)
{
  pinMode(PinD, OUTPUT);
  switch (D) {
    case 1:
      digitalWrite(SePinBA, LOW);
      digitalWrite(SePinBB, LOW);
      digitalWrite(SePinBC, LOW);
      break;
    case 2:
      digitalWrite(SePinBA, HIGH);
      digitalWrite(SePinBB, LOW);
      digitalWrite(SePinBC, LOW);
      break;
    case 3:
      digitalWrite(SePinBA, LOW);
      digitalWrite(SePinBB, HIGH);
      digitalWrite(SePinBC, LOW);
      break;
    case 0:
      digitalWrite(SePinBA, HIGH);
      digitalWrite(SePinBB, HIGH);
      digitalWrite(SePinBC, LOW);
      break;
    case 4:
      digitalWrite(SePinBA, LOW);
      digitalWrite(SePinBB, LOW);
      digitalWrite(SePinBC, HIGH);
      break;
    case 7:
      digitalWrite(SePinBA, HIGH);
      digitalWrite(SePinBB, LOW);
      digitalWrite(SePinBC, HIGH);
      break;
    case 5:
      digitalWrite(SePinBA, LOW);
      digitalWrite(SePinBB, HIGH);
      digitalWrite(SePinBC, HIGH);
      break;
    case 6:
      digitalWrite(SePinBA, HIGH);
      digitalWrite(SePinBB, HIGH);
      digitalWrite(SePinBC, HIGH);
      break;
  }
  digitalWrite(PinD,set);
}


boolean digitalReadA(byte A)
{
  
  pinMode(PinA, INPUT);
  switch (A) {
    case 6:
      digitalWrite(SePinAA, LOW);
      digitalWrite(SePinAB, LOW);
      digitalWrite(SePinAC, LOW);
      break;
    case 5:
      digitalWrite(SePinAA, HIGH);
      digitalWrite(SePinAB, LOW);
      digitalWrite(SePinAC, LOW);
      break;
    case 4:
      digitalWrite(SePinAA, LOW);
      digitalWrite(SePinAB, HIGH);
      digitalWrite(SePinAC, LOW);
      break;
    case 7:
      digitalWrite(SePinAA, HIGH);
      digitalWrite(SePinAB, HIGH);
      digitalWrite(SePinAC, LOW);
      break;
    case 3:
      digitalWrite(SePinAA, LOW);
      digitalWrite(SePinAB, LOW);
      digitalWrite(SePinAC, HIGH);
      break;
    case 0:
      digitalWrite(SePinAA, HIGH);
      digitalWrite(SePinAB, LOW);
      digitalWrite(SePinAC, HIGH);
      break;
    case 2:
      digitalWrite(SePinAA, LOW);
      digitalWrite(SePinAB, HIGH);
      digitalWrite(SePinAC, HIGH);
      break;
    case 1:
      digitalWrite(SePinAA, HIGH);
      digitalWrite(SePinAB, HIGH);
      digitalWrite(SePinAC, HIGH);
      break;
  }
  return digitalRead(PinA);
}



boolean digitalReadB(byte B)
{
  pinMode(PinB, INPUT);
  switch (B) {
    case 6:
      digitalWrite(SePinAA, LOW);
      digitalWrite(SePinAB, LOW);
      digitalWrite(SePinAC, LOW);
      break;
    case 5:
      digitalWrite(SePinAA, HIGH);
      digitalWrite(SePinAB, LOW);
      digitalWrite(SePinAC, LOW);
      break;
    case 4:
      digitalWrite(SePinAA, LOW);
      digitalWrite(SePinAB, HIGH);
      digitalWrite(SePinAC, LOW);
      break;
    case 7:
      digitalWrite(SePinAA, HIGH);
      digitalWrite(SePinAB, HIGH);
      digitalWrite(SePinAC, LOW);
      break;
    case 3:
      digitalWrite(SePinAA, LOW);
      digitalWrite(SePinAB, LOW);
      digitalWrite(SePinAC, HIGH);
      break;
    case 0:
      digitalWrite(SePinAA, HIGH);
      digitalWrite(SePinAB, LOW);
      digitalWrite(SePinAC, HIGH);
      break;
    case 2:
      digitalWrite(SePinAA, LOW);
      digitalWrite(SePinAB, HIGH);
      digitalWrite(SePinAC, HIGH);
      break;
    case 1:
      digitalWrite(SePinAA, HIGH);
      digitalWrite(SePinAB, HIGH);
      digitalWrite(SePinAC, HIGH);
      break;
  }
  return digitalRead(PinB);
}

boolean digitalReadC(byte C)
{
  pinMode(PinC, INPUT);
  switch (C) {
    case 1:
      digitalWrite(SePinBA, LOW);
      digitalWrite(SePinBB, LOW);
      digitalWrite(SePinBC, LOW);
      break;
    case 2:
      digitalWrite(SePinBA, HIGH);
      digitalWrite(SePinBB, LOW);
      digitalWrite(SePinBC, LOW);
      break;
    case 3:
      digitalWrite(SePinBA, LOW);
      digitalWrite(SePinBB, HIGH);
      digitalWrite(SePinBC, LOW);
      break;
    case 0:
      digitalWrite(SePinBA, HIGH);
      digitalWrite(SePinBB, HIGH);
      digitalWrite(SePinBC, LOW);
      break;
    case 4:
      digitalWrite(SePinBA, LOW);
      digitalWrite(SePinBB, LOW);
      digitalWrite(SePinBC, HIGH);
      break;
    case 7:
      digitalWrite(SePinBA, HIGH);
      digitalWrite(SePinBB, LOW);
      digitalWrite(SePinBC, HIGH);
      break;
    case 5:
      digitalWrite(SePinBA, LOW);
      digitalWrite(SePinBB, HIGH);
      digitalWrite(SePinBC, HIGH);
      break;
    case 6:
      digitalWrite(SePinBA, HIGH);
      digitalWrite(SePinBB, HIGH);
      digitalWrite(SePinBC, HIGH);
      break;
  }
  return digitalRead(PinC);
}

boolean digitalReadD(byte D)
{
  
  pinMode(PinD, INPUT);
  switch (D) {
    case 1:
      digitalWrite(SePinBA, LOW);
      digitalWrite(SePinBB, LOW);
      digitalWrite(SePinBC, LOW);
      break;
    case 2:
      digitalWrite(SePinBA, HIGH);
      digitalWrite(SePinBB, LOW);
      digitalWrite(SePinBC, LOW);
      break;
    case 3:
      digitalWrite(SePinBA, LOW);
      digitalWrite(SePinBB, HIGH);
      digitalWrite(SePinBC, LOW);
      break;
    case 0:
      digitalWrite(SePinBA, HIGH);
      digitalWrite(SePinBB, HIGH);
      digitalWrite(SePinBC, LOW);
      break;
    case 4:
      digitalWrite(SePinBA, LOW);
      digitalWrite(SePinBB, LOW);
      digitalWrite(SePinBC, HIGH);
      break;
    case 7:
      digitalWrite(SePinBA, HIGH);
      digitalWrite(SePinBB, LOW);
      digitalWrite(SePinBC, HIGH);
      break;
    case 5:
      digitalWrite(SePinBA, LOW);
      digitalWrite(SePinBB, HIGH);
      digitalWrite(SePinBC, HIGH);
      break;
    case 6:
      digitalWrite(SePinBA, HIGH);
      digitalWrite(SePinBB, HIGH);
      digitalWrite(SePinBC, HIGH);
      break;
  }
  return digitalRead(PinD);
}






int analogReadA(byte A)
{
  pinMode(PinA, INPUT);
  switch (A) {
    case 6:
      digitalWrite(SePinAA, LOW);
      digitalWrite(SePinAB, LOW);
      digitalWrite(SePinAC, LOW);
      break;
    case 5:
      digitalWrite(SePinAA, HIGH);
      digitalWrite(SePinAB, LOW);
      digitalWrite(SePinAC, LOW);
      break;
    case 4:
      digitalWrite(SePinAA, LOW);
      digitalWrite(SePinAB, HIGH);
      digitalWrite(SePinAC, LOW);
      break;
    case 7:
      digitalWrite(SePinAA, HIGH);
      digitalWrite(SePinAB, HIGH);
      digitalWrite(SePinAC, LOW);
      break;
    case 3:
      digitalWrite(SePinAA, LOW);
      digitalWrite(SePinAB, LOW);
      digitalWrite(SePinAC, HIGH);
      break;
    case 0:
      digitalWrite(SePinAA, HIGH);
      digitalWrite(SePinAB, LOW);
      digitalWrite(SePinAC, HIGH);
      break;
    case 2:
      digitalWrite(SePinAA, LOW);
      digitalWrite(SePinAB, HIGH);
      digitalWrite(SePinAC, HIGH);
      break;
    case 1:
      digitalWrite(SePinAA, HIGH);
      digitalWrite(SePinAB, HIGH);
      digitalWrite(SePinAC, HIGH);
      break;
  }
  return analogRead(PinA);
}



int analogReadB(byte B)
{
  pinMode(PinB, INPUT);
  switch (B) {
    case 6:
      digitalWrite(SePinAA, LOW);
      digitalWrite(SePinAB, LOW);
      digitalWrite(SePinAC, LOW);
      break;
    case 5:
      digitalWrite(SePinAA, HIGH);
      digitalWrite(SePinAB, LOW);
      digitalWrite(SePinAC, LOW);
      break;
    case 4:
      digitalWrite(SePinAA, LOW);
      digitalWrite(SePinAB, HIGH);
      digitalWrite(SePinAC, LOW);
      break;
    case 7:
      digitalWrite(SePinAA, HIGH);
      digitalWrite(SePinAB, HIGH);
      digitalWrite(SePinAC, LOW);
      break;
    case 3:
      digitalWrite(SePinAA, LOW);
      digitalWrite(SePinAB, LOW);
      digitalWrite(SePinAC, HIGH);
      break;
    case 0:
      digitalWrite(SePinAA, HIGH);
      digitalWrite(SePinAB, LOW);
      digitalWrite(SePinAC, HIGH);
      break;
    case 2:
      digitalWrite(SePinAA, LOW);
      digitalWrite(SePinAB, HIGH);
      digitalWrite(SePinAC, HIGH);
      break;
    case 1:
      digitalWrite(SePinAA, HIGH);
      digitalWrite(SePinAB, HIGH);
      digitalWrite(SePinAC, HIGH);
      break;
  }
  return analogRead(PinB);
}

int analogReadC(byte C)
{
  pinMode(PinC, INPUT);
  switch (C) {
    case 1:
      digitalWrite(SePinBA, LOW);
      digitalWrite(SePinBB, LOW);
      digitalWrite(SePinBC, LOW);
      break;
    case 2:
      digitalWrite(SePinBA, HIGH);
      digitalWrite(SePinBB, LOW);
      digitalWrite(SePinBC, LOW);
      break;
    case 3:
      digitalWrite(SePinBA, LOW);
      digitalWrite(SePinBB, HIGH);
      digitalWrite(SePinBC, LOW);
      break;
    case 0:
      digitalWrite(SePinBA, HIGH);
      digitalWrite(SePinBB, HIGH);
      digitalWrite(SePinBC, LOW);
      break;
    case 4:
      digitalWrite(SePinBA, LOW);
      digitalWrite(SePinBB, LOW);
      digitalWrite(SePinBC, HIGH);
      break;
    case 7:
      digitalWrite(SePinBA, HIGH);
      digitalWrite(SePinBB, LOW);
      digitalWrite(SePinBC, HIGH);
      break;
    case 5:
      digitalWrite(SePinBA, LOW);
      digitalWrite(SePinBB, HIGH);
      digitalWrite(SePinBC, HIGH);
      break;
    case 6:
      digitalWrite(SePinBA, HIGH);
      digitalWrite(SePinBB, HIGH);
      digitalWrite(SePinBC, HIGH);
      break;
  }
  return analogRead(PinC);
}

int analogReadD(byte D)
{
  pinMode(PinD, INPUT);
  switch (D) {
    case 1:
      digitalWrite(SePinBA, LOW);
      digitalWrite(SePinBB, LOW);
      digitalWrite(SePinBC, LOW);
      break;
    case 2:
      digitalWrite(SePinBA, HIGH);
      digitalWrite(SePinBB, LOW);
      digitalWrite(SePinBC, LOW);
      break;
    case 3:
      digitalWrite(SePinBA, LOW);
      digitalWrite(SePinBB, HIGH);
      digitalWrite(SePinBC, LOW);
      break;
    case 0:
      digitalWrite(SePinBA, HIGH);
      digitalWrite(SePinBB, HIGH);
      digitalWrite(SePinBC, LOW);
      break;
    case 4:
      digitalWrite(SePinBA, LOW);
      digitalWrite(SePinBB, LOW);
      digitalWrite(SePinBC, HIGH);
      break;
    case 7:
      digitalWrite(SePinBA, HIGH);
      digitalWrite(SePinBB, LOW);
      digitalWrite(SePinBC, HIGH);
      break;
    case 5:
      digitalWrite(SePinBA, LOW);
      digitalWrite(SePinBB, HIGH);
      digitalWrite(SePinBC, HIGH);
      break;
    case 6:
      digitalWrite(SePinBA, HIGH);
      digitalWrite(SePinBB, HIGH);
      digitalWrite(SePinBC, HIGH);
      break;
  }
  return analogRead(PinD);
}




void selectA(byte A)
{
  switch (A) {
    case 6:
      digitalWrite(SePinAA, LOW);
      digitalWrite(SePinAB, LOW);
      digitalWrite(SePinAC, LOW);
      break;
    case 5:
      digitalWrite(SePinAA, HIGH);
      digitalWrite(SePinAB, LOW);
      digitalWrite(SePinAC, LOW);
      break;
    case 4:
      digitalWrite(SePinAA, LOW);
      digitalWrite(SePinAB, HIGH);
      digitalWrite(SePinAC, LOW);
      break;
    case 7:
      digitalWrite(SePinAA, HIGH);
      digitalWrite(SePinAB, HIGH);
      digitalWrite(SePinAC, LOW);
      break;
    case 3:
      digitalWrite(SePinAA, LOW);
      digitalWrite(SePinAB, LOW);
      digitalWrite(SePinAC, HIGH);
      break;
    case 0:
      digitalWrite(SePinAA, HIGH);
      digitalWrite(SePinAB, LOW);
      digitalWrite(SePinAC, HIGH);
      break;
    case 2:
      digitalWrite(SePinAA, LOW);
      digitalWrite(SePinAB, HIGH);
      digitalWrite(SePinAC, HIGH);
      break;
    case 1:
      digitalWrite(SePinAA, HIGH);
      digitalWrite(SePinAB, HIGH);
      digitalWrite(SePinAC, HIGH);
      break;
  }
}

void selectB(byte B)
{
  switch (B) {
    case 6:
      digitalWrite(SePinAA, LOW);
      digitalWrite(SePinAB, LOW);
      digitalWrite(SePinAC, LOW);
      break;
    case 5:
      digitalWrite(SePinAA, HIGH);
      digitalWrite(SePinAB, LOW);
      digitalWrite(SePinAC, LOW);
      break;
    case 4:
      digitalWrite(SePinAA, LOW);
      digitalWrite(SePinAB, HIGH);
      digitalWrite(SePinAC, LOW);
      break;
    case 7:
      digitalWrite(SePinAA, HIGH);
      digitalWrite(SePinAB, HIGH);
      digitalWrite(SePinAC, LOW);
      break;
    case 3:
      digitalWrite(SePinAA, LOW);
      digitalWrite(SePinAB, LOW);
      digitalWrite(SePinAC, HIGH);
      break;
    case 0:
      digitalWrite(SePinAA, HIGH);
      digitalWrite(SePinAB, LOW);
      digitalWrite(SePinAC, HIGH);
      break;
    case 2:
      digitalWrite(SePinAA, LOW);
      digitalWrite(SePinAB, HIGH);
      digitalWrite(SePinAC, HIGH);
      break;
    case 1:
      digitalWrite(SePinAA, HIGH);
      digitalWrite(SePinAB, HIGH);
      digitalWrite(SePinAC, HIGH);
      break;
  }
}

void selectC(byte C)
{
  switch (C) {
    case 1:
      digitalWrite(SePinBA, LOW);
      digitalWrite(SePinBB, LOW);
      digitalWrite(SePinBC, LOW);
      break;
    case 2:
      digitalWrite(SePinBA, HIGH);
      digitalWrite(SePinBB, LOW);
      digitalWrite(SePinBC, LOW);
      break;
    case 3:
      digitalWrite(SePinBA, LOW);
      digitalWrite(SePinBB, HIGH);
      digitalWrite(SePinBC, LOW);
      break;
    case 0:
      digitalWrite(SePinBA, HIGH);
      digitalWrite(SePinBB, HIGH);
      digitalWrite(SePinBC, LOW);
      break;
    case 4:
      digitalWrite(SePinBA, LOW);
      digitalWrite(SePinBB, LOW);
      digitalWrite(SePinBC, HIGH);
      break;
    case 7:
      digitalWrite(SePinBA, HIGH);
      digitalWrite(SePinBB, LOW);
      digitalWrite(SePinBC, HIGH);
      break;
    case 5:
      digitalWrite(SePinBA, LOW);
      digitalWrite(SePinBB, HIGH);
      digitalWrite(SePinBC, HIGH);
      break;
    case 6:
      digitalWrite(SePinBA, HIGH);
      digitalWrite(SePinBB, HIGH);
      digitalWrite(SePinBC, HIGH);
      break;
  }
}

void selectD(byte D)
{
  switch (D) {
    case 1:
      digitalWrite(SePinBA, LOW);
      digitalWrite(SePinBB, LOW);
      digitalWrite(SePinBC, LOW);
      break;
    case 2:
      digitalWrite(SePinBA, HIGH);
      digitalWrite(SePinBB, LOW);
      digitalWrite(SePinBC, LOW);
      break;
    case 3:
      digitalWrite(SePinBA, LOW);
      digitalWrite(SePinBB, HIGH);
      digitalWrite(SePinBC, LOW);
      break;
    case 0:
      digitalWrite(SePinBA, HIGH);
      digitalWrite(SePinBB, HIGH);
      digitalWrite(SePinBC, LOW);
      break;
    case 4:
      digitalWrite(SePinBA, LOW);
      digitalWrite(SePinBB, LOW);
      digitalWrite(SePinBC, HIGH);
      break;
    case 7:
      digitalWrite(SePinBA, HIGH);
      digitalWrite(SePinBB, LOW);
      digitalWrite(SePinBC, HIGH);
      break;
    case 5:
      digitalWrite(SePinBA, LOW);
      digitalWrite(SePinBB, HIGH);
      digitalWrite(SePinBC, HIGH);
      break;
    case 6:
      digitalWrite(SePinBA, HIGH);
      digitalWrite(SePinBB, HIGH);
      digitalWrite(SePinBC, HIGH);
      break;
  }
}