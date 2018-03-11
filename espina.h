#ifndef ESPINA_H
#define  ESPINA_H
#include "bombas.h"
using namespace std;

class Espina:public Bombas{
private:

public:
  int cantidad;
  Espina();
  Espina(int);
  int getCantidad();
};
#endif
