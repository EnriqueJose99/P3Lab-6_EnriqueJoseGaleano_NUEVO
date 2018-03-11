#include "bombas.h"
#include "normal.h"
#include "espina.h"
#include "jugador.h"
#include "items.h"
#include "escenario.h"
#include "invisible.h"
#include "tren.h"
#include "v.h"
#include <ncurses.h>
#include <iostream>
using namespace std;


int main(){
  initscr();
  printw("Hola Mundo, ");
  printw("Como estas?, ");
  printw("Hay herencia, ");
  printw("Estan las clase y la matriz.");
  refresh();
  getch();
  endwin();
  return 0;
}
