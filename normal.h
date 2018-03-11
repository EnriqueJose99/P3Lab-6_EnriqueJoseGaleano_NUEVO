#ifndef NORMAL_H
#define NORMAL_H
#include "bombas.h"

using namespace std;

class Normal:public Bombas{
private:

public:
  int alcanze;
  Normal();
  Normal(int);
  int getAlcanze();
};
#endif
