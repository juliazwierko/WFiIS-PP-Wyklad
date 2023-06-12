//zawartosc pliku makefile
lista.exe: main.o lista.o
gcc -o lista.exe lista.o main.o -Wall lista.o: lista.c lista.h
gcc -c -g lista.c -Wall main.o: main.c lista.h
gcc -c -g main.c -Wall

//polecenie make uruchamia 
//gcc -c -g main.c -Wall
//gcc -c -g lista.c -Wall
//gcc -o lista.exe main.o lista.o

//kolejne uruchomienie polecenia make
//make: 'lista.exe' jest aktualne

//modyfikuj plik lista.c i uruchamiamy make:
//gcc -c -g lista.c -Wall
//gcc -o lista.exe main.o lista.o
