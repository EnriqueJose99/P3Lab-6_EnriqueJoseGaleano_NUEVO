#include "jugador.h"
#include <iostream>
#include <string>
using namespace std;


Jugador::Jugador(){

}
Jugador::Jugador(WINDOW* currwin, string pNombre, bool pEstadoVM, int pTipoDeControlador):Items(x,y){
  this->currwin = currwin;
  nombre = pNombre;
  estadoVM = pEstadoVM;
  tipoDeControlador = pTipoDeControlador;

  getmaxyx(currwin, yMax, xMAx);

}

/*Jugador::Jugador(string pNombre, bool pEstadoVM, int pTipoDeControlador):Items(x, y){
  nombre = pNombre;
  estadoVM = pEstadoVM;
  tipoDeControlador = pTipoDeControlador;

}*/

void Jugador::setNombre(string pNombre){
  nombre = pNombre;
}
string Jugador::getNombre(){
  return nombre;
}

void Jugador::setEstadoVM(bool pEstadoVM){
  estadoVM = pEstadoVM;
}
bool Jugador::getEstadoVM(){
  return estadoVM;
}

void Jugador::setTipoDeControlador(int pTipoDeControlador){
  tipoDeControlador = pTipoDeControlador;
}
int Jugador::getTipoDeControlador(){
  return tipoDeControlador;
}
