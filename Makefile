output: main.o items.o jugador.o bombas.o espina.o normal.o v.o escenario.o invisible.o tren.o
	g++ main.o items.o jugador.o bombas.o espina.o normal.o v.o escenario.o invisible.o tren.o -o output -lncurses

main.o: main.cpp items.h jugador.h bombas.h espina.h normal.h v.h escenario.h invisible.h tren.h 
	g++ -c main.cpp

items.o: items.cpp items.h
	g++ -c items.cpp

jugador.o: jugador.cpp jugador.h items.h
	g++ -c jugador.cpp

bombas.o: bombas.cpp bombas.h items.h
	g++ -c bombas.cpp

normal.o: normal.cpp normal.h bombas.h
		g++ -c normal.cpp

espina.o: espina.cpp espina.h bombas.h
	g++ -c espina.cpp

v.o: v.cpp v.h bombas.h
	g++ -c v.cpp

escenario.o: escenario.cpp escenario.h items.h bombas.h
	g++ -c escenario.cpp

invisible.o: invisible.cpp invisible.h escenario.h
	g++ -c invisible.cpp

tren.o: tren.cpp tren.h escenario.h
	g++ -c tren.cpp
