#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <math.h>

//Wyliczenie to zbiór stałych całkowitych o określonych nazwach.


enum moneta { zloty, rubl, griwna };

int i;
enum {CLUBS, DIAMONDS, HEARTS, SPADES} s;


int main (int argc, char **argv){
    enum moneta x;
    x = rubl;
    if (x == griwna)
        printf("%d", 0);
    else if (x == rubl){
        printf("%d\n", 1);
    }
    //1

    i = DIAMONDS; // i = 1
    s = 0; // s = 0 CLUBS
    s++; // s = 1 DIAMONDS
    i = s + 2; // i = 3 // SPADES;

    printf("%d\n", i);
    //3;

    return 0;
}
