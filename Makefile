# -*- MakeFile -*-
all: pendu

pendu: main.o fonctions.o
	gcc main.o fonctions.o -o pendu

main.o: main.c
	gcc -c main.c

fonctions.o: fonctions.c fonctions.h
	gcc -c fonctions.c

clean:
	rm *.o pendu

build:
	make && ./pendu

