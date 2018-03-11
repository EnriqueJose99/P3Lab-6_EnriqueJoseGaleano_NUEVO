#include <iostream>
#include <string>
#include <ncurses.h>
#include <string>
#include <vector>
#include "items.h"

#ifndef JUGADOR_H
#define JUGADOR_H
using namespace std;
class Jugador:public Items{
private:


public:
  string nombre;
  bool estadoVM;
  int tipoDeControlador;
  int yMax;
  int xMAx;
  int size;
  int xLast;
  int yLast;
  WINDOW* currwin;
  Jugador();
  Jugador(WINDOW*, string, bool, int);
  vector<string> bomberMan;
  //Jugador(string, bool, int);
  void setNombre(string);
  string getNombre();
  void setEstadoVM(bool);
  bool getEstadoVM();
  void setTipoDeControlador(int);
  int getTipoDeControlador();
  int getXLast();
  int getYLast();
  void display();
  bool moveUp();
  bool moveDown();
  bool moveLeft();
  bool moveRight();

};
#endif
