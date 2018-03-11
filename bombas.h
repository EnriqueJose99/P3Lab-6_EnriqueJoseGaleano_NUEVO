#ifndef BOMBAS_H
#define BOMBAS_H
#include <iostream>
#include <string>
#include "items.h"
using namespace std;

class Bombas:public Items{
private:


public:
  int contador;
  Bombas();
  Bombas(int);

  void setContador(int);
  int getContador();


};
#endif
