#include "v.h"
#include <iostream>
using namespace std;

V::V(){

}

V::V(int pPosDiagonal):Bombas(contador){
  posDiagonal = pPosDiagonal;

}

int V::getPosDiagonal(){
  return posDiagonal;
}
