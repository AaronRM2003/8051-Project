#include <reg52.h>
#include <intrins.h>



void Delay1(unsigned int ms)
{
  unsigned long int us = ms*1000;
  while(us--)
  {
    _nop_();
  }		
}

void servo_delay(unsigned int us)
{
  while(us--)
  {
    _nop_();
  }
}