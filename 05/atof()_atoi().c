#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define SIZ 4

//int main(int atgc, char **argv)  
int main(int argc, char *argv[]) {
    //argumenty funkcji main
    
    //Parametr argc typu int to liczba argumentów wiersza poleceń, większa lub równa od 1.
    //Parametr argv to wskaźnik do tablicy łańcuchów. Każdy element tej tablicy wskazuje na argument wiersza poleceń.

    //Łańcuchy reprezentujące liczby muszą zostać skonwertowane przy pomocy funkcji atoi(), atof().

// STDLIB.H - BIBLIOTEKA
// double atof - funkcja przeksztalca tekst zawarty w s w -> double 
// int atoi - unkcja przekształca tekst zawarty w s na -> int
    int x = atoi("-87");
    printf("x=%d\n", x);

    double z = atof("1.34657");
    printf("z=%lf\n", z);


    printf("Nazwa␣programu:␣%s\n", argv[0]); 
    for(int i=1; i<argc; i++)
        printf("%s\n", argv[i]); 
    for(char **p=&argv[1]; *p; p++)
        printf("%s\n", *p);
    printf("%d, %lf\n", atoi(argv[2]), atof(argv[1]));

    //więc jak chcesz to pobrać w main to musisz:
    double y = atof(argv[2]);
    printf("%f", y);
    return 0; 
}
