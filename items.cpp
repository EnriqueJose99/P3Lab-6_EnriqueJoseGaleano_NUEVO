#include "items.h"
#include <iostream>

Items::Items(){

}

Items::Items(int pX, int pY){
  x = pX;
  y = pY;
}

void Items::setX(int pX){
  x = pX;
}

int Items::getX(){
  return x;
}


void Items::setY(int pY){
  y = pY;
}

int Items::getY(){
  return y;
}
