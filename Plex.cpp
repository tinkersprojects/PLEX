/*
  Plex.cpp - Library for Plex board.
  Created by William Bailes, May 24, 2017.
  Released into the public domain.
*/
#include "Plex.h"

Plex::Plex()
{
  pinMode(SePinAA, OUTPUT);
  pinMode(SePinAB, OUTPUT);
  pinMode(SePinAC, OUTPUT);
  
  pinMode(SePinBA, OUTPUT);
  pinMode(SePinBB, OUTPUT);
  pinMode(SePinBC, OUTPUT);

  lcd.begin(16, 2);
}

void Plex::begin()
{

}

void Plex::digitalWriteA(byte A, boolean set)
{
  pinMode(PinA, OUTPUT);
  this->selectA(A);
  digitalWrite(PinA,set);
}

void Plex::digitalWriteB(byte B, boolean set)
{
  pinMode(PinB, OUTPUT);
  this->selectB(B);
  digitalWrite(PinB,set);
}

void Plex::digitalWriteC(byte C, boolean set)
{
  pinMode(PinC, OUTPUT);
  this->selectC(C);
  digitalWrite(PinC,set);
}

void Plex::digitalWriteD(byte D, boolean set)
{
  pinMode(PinD, OUTPUT);
  this->selectD(D);
  digitalWrite(PinD,set);
}

boolean Plex::digitalReadA(byte A)
{
  
  pinMode(PinA, INPUT);
  this->selectA(A);
  return digitalRead(PinA);
}

boolean Plex::digitalReadB(byte B)
{
  pinMode(PinB, INPUT);
  this->selectB(B);
  return digitalRead(PinB);
}

boolean Plex::digitalReadC(byte C)
{
  pinMode(PinC, INPUT);
  this->selectC(C);
  return digitalRead(PinC);
}

boolean Plex::digitalReadD(byte D)
{
  
  pinMode(PinD, INPUT);
  this->selectD(D);
  return digitalRead(PinD);
}

int Plex::analogReadA(byte A)
{
  pinMode(PinA, INPUT);
  this->selectA(A);
  return analogRead(PinA);
}

int Plex::analogReadB(byte B)
{
  pinMode(PinB, INPUT);
  this->selectB(B);
  return analogRead(PinB);
}

int Plex::analogReadC(byte C)
{
  pinMode(PinC, INPUT);
  this->selectC(C);
  return analogRead(PinC);
}

int Plex::analogReadD(byte D)
{
  pinMode(PinD, INPUT);
  this->selectD(D);
  return analogRead(PinD);
}

void Plex::selectA(byte A)
{
  this->selectLeft(A);
}

void Plex::selectB(byte B)
{
  this->selectLeft(B);
}

void Plex::selectC(byte C)
{
  this->selectRight(C);
}

void Plex::selectD(byte D)
{
  this->selectRight(D);
}

void Plex::selectLeft(byte number)
{
  switch (number) {
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

void Plex::selectRight(byte number)
{
  switch (number) {
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