#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <math.h>

typedef float saldo;
saldo wrzesien;

typedef struct telement{
    int wiek;
    struct telement *nast;
}   element;

element *root; // struct telement *root
//Ostatni wiersz kodu definiuje zmienną root
// jako wskaźnik na strukturę telement.
// Jest to skrócony zapis z użyciem typedef, 
// co oznacza, że można użyć typu element 
// zamiast pełnej nazwy struktury struct telement. 


typedef struct Person {
    char name[50];
    int age;
} Person;

int main (int argc, char **argv){
    //1  ulong to alias dla typu unsigned long, 
    typedef unsigned long ulong;
    ulong myValue = 123456789UL;

    //2
    typedef int id_t;
    id_t userId = 1234;

    struct Person Julia;
    //lub
    Person Pawel;
    Pawel.age = 23;
    strcpy(Pawel.name, "Pawel Szybko");
    puts(Pawel.name);
  //Pawel Szybko
    return 0;
}
