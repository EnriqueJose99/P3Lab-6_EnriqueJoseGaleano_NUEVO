#include "invisible.h"
#include <iostream>
using namespace std;

Invisible::Invisible(){

}

Invisible::Invisible(int pVidaContador, int pContadorBombas): Escenario(nombreEs){
  vidaContador = pVidaContador;
  contadorBombas = pContadorBombas;
}

int Invisible::getVidaContador(){
  return vidaContador;
}

int Invisible::getContadorBombas(){
  return contadorBombas;
}
