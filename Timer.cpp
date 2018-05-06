/*
Timer.cpp - This library was intended for the Arduino enviroment.
Timer library uses Arduinoi time functions such as millis() or micros()
to make multitasking process instead using delay() function.
Created by Ciosepp, March 7, 2018.
Released into the public domain.
*/

#include "Arduino.h"
#include "Timer.h"

Timer::Timer(int _tScale)//set 1 for uS time scale, 1000 for mS
{
int tscale = _tScale;
}

long timerTime;
void Timer::startTimer(long ext_setTime)
{
  timerTime = micros() + (ext_setTime * tscale);
}

bool Timer::timerEnd()
{
  if(timerTime <= micros())
      return true;
  
  else
      return false;
}
