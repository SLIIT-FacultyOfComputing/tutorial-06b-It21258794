#include "Box.h"
#include<iostream>

// Implement setters and getters
void Box::setLength(int blength)
{
  length= blength;
}


void Box::setWidth(int bwidth)
{
  width=bwidth;
}
void Box::setHeight(int bheight)
{
  height=bheight;
}
      
int Box::getLength()
{
  return length;
}
int Box::getWidth();
{
  return width;
}
int Box::getHeight()
{
  return height;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return length*width*height;
}
