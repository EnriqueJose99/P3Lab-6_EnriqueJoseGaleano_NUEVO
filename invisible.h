#ifndef INVISIBLE_H
#define INVISIBLE_H
#include <iostream>
#include "escenario.h"
using namespace std;

class Invisible:public Escenario{
private:

public:
  int vidaContador;
  int contadorBombas;

  Invisible();
  Invisible(int, int);

  int getVidaContador();
  int getContadorBombas();


};
#endif
