#include "escenario.h"
#include "bombas.h"
#include <iostream>
#include <string>

using namespace std;

Escenario::Escenario(){

}

Escenario::Escenario(string pNombreEs){
  nombreEs = pNombreEs;
}

void Escenario::setNombreEs(string pNombreEs){
  nombreEs = pNombreEs;
}
string Escenario::getNombreEs(){
  return nombreEs;
}

vector<Bombas*>Escenario::getBombas(){
  return bombas;
}

Items*** Escenario::crearTablero(){
  Items*** tablero = new Items**[11];
  for (int i = 0; i < 11; i++) {
    tablero[i] = new Items*[13];
  }
  for (int i = 0; i < 11; i++) {
    for (int j = 0; j < 13; j++) {
      tablero[i][j] = NULL;
    }
  }
  return tablero;
}
