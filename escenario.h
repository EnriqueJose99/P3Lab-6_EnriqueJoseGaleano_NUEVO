#ifndef ESCENARIO_H
#define ESCENARIO_H
#include "items.h"
#include "bombas.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Escenario{
private:

public:
  vector<Bombas*> bombas;
  Items*** crearTablero();
  string nombreEs;
  Escenario();
  Escenario(string);
  void setNombreEs(string);
  string getNombreEs();
  vector<Bombas*> getBombas();
  //int size = 11;
  //int size1 = 13;
  //Items*** matrix = new Items [11][13];
};
#endif
