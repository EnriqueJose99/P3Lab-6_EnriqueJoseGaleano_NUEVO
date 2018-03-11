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
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;


int main(){
  initscr();
  noecho();
  keypad(stdscr, true);
  timeout(500);
  int yMax, xMax, userInput;
  string nombre = "Enrique";
  getmaxyx(stdscr, yMax, xMax);

  WINDOW* playfield = newwin(12, 12, yMax/12, xMax/12);
  box(playfield, 0, 0);
  refresh();
  wrefresh(playfield);

  Jugador* juga = new Jugador(playfield, nombre, true, 1);

  do {
    /* code */
    move(12, 36);
    printw("Game over aprete q");
  } while(getch() != 'q');
  refresh();
  getch();
  endwin();
  return 0;
}
