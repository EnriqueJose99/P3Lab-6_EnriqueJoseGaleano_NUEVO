#ifndef V_H
#define V_H
#include "bombas.h"
#include <iostream>
using namespace std;


class V:public Bombas{
private:

public:
  int posDiagonal;
  V();
  V(int);
  int getPosDiagonal();
};
#endif
