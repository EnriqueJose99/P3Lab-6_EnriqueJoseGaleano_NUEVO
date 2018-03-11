#ifndef TREN_H
#define TREN_H
#include <iostream>
#include <string>
#include <vector>
#include "escenario.h"
using namespace std;

class Tren:public Escenario{
private:

public:
  int vagonX;
  int vagonY;
  vector<int*> posiciones;

  int getVagonX();
  int getVagonY();
  //vector<int* Posiciones> getPosiciones();
  Tren();
  Tren(int, int);

};
#endif
