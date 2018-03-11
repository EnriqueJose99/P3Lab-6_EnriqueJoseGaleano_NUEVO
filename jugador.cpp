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
  bomberMan.push_back("3-1");
  size = 2;
  xLast = 1;
  yLast = 0;
  getmaxyx(currwin, yMax, xMax);

}

/*Jugador::Jugador(string pNombre, bool pEstadoVM, int pTipoDeControlador):Items(x, y){
  nombre = pNombre;
  estadoVM = pEstadoVM;
  tipoDeControlador = pTipoDeControlador;

}*/

bool Jugador::moveUp(){
  if (bomberMan[size -1][0] - '0' > 1) {
    xLast = 0;
    yLast = -1;
    return true;
  }else{
    return false;
  }
}
bool Jugador::moveDown(){
  if (bomberMan[size -1][0] - '0' < yMax-2) {
    xLast = 0;
    yLast = 1;
    return true;
  }else{
    return false;
  }
}
bool Jugador::moveLeft(){
  if (bomberMan[size -1][0] - '0' > 1) {
    xLast = -1;
    yLast = 0;
    return true;
  }else{
    return false;
  }
}
bool Jugador::moveRight(){
  if (bomberMan[size -1][0] - '0' < xMax-2) {
    xLast = 1;
    yLast = 0;
    return true;
  }else{
    return false;
  }
}

void Jugador::display(){
  for (int i = 0; i < size; i++) {
    mvwaddch(currwin, bomberMan[i][0] - '0', bomberMan[1][2] - '0', '^');
  }
}

int Jugador::getXLast(){
  return xLast;
}
int Jugador::getYLast(){
  return yLast;
}

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
