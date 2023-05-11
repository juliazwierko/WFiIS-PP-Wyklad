#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#define SIZE 12;
//struct etykieta *nazwa-zmiennej; 

struct person{
    char first[12]; 
    char last[12];
};

int main (int argc, char **argv){
    struct person p1 = { "Julia", "Zviarko"};
    struct person *ptp1 = &p1;

    //POINTERY WYPISUJEMY W DWA SPOSOBY:
    // (*pa)a.<...>
    // pa-><...>
    printf("%s %s\n", ptp1->first, (*ptp1).last);
    printf("%s %s", (*ptp1).first, ptp1->last);
    return 0;
}
//Julia Zviarko
//Julia Zviarko
