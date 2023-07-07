#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

typedef struct 
{
    char name[32];
    size_t n;
    double coordinates[]; //tablica elastyczna, ktora moze miec dowolny rozmiar;
} point_nD;
//sizeof moze zwracac rozmiar struktury z pomijeciem tablicy elastycznej;

int main(int argc, char *argv[]) 
{
    point_nD p_bad = {"error", 0};
    //W praktyce nie stosuje się takiej deklaracji, ponieważ 
    // w ten sposób struktura jest tworzona z pominięciem tablicy 
    // elastycznej - zaalokowana została domyślna ilość pamięci 
    // potrzebnej na przechowanie tylko "zwykłych" składników 
    // struktury, nie można więc odwoływać się do tablicy elastycznej.

    point_nD *p1 = malloc(sizeof(point_nD) + 5*(sizeof(double)));
    p1->n = 5;
    strcpy(p1->name, "Vector p1");
    for(size_t i = 0; i < p1->n; ++i)
    {
        p1->coordinates[i] = i+1;
    }

    //Kopiowanie składników struktur przez proste przypisanie:
    point_nD *p2 = malloc(sizeof(point_nD) + 5*sizeof(double));
    *p2 = *p1;

    memcpy(p2,p1, sizeof(point_nD) + 5 * sizeof(double));
    return 0;
}
