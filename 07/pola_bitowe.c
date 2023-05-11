#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

struct status_type{
    unsigned int    : 4;
    unsigned int cts : 1;
    unsigned int dsr : 1;
} status;
    // *Nie można pobrać adresu pola bitowego.
    // *Nie można tworzyć tablic pól bitowych.
    // *Pól bitowych nie można deklarować jako statycznych.
    // *Korzystanie z pól bitowych wiąże kod z konkretnym typem komputera;
    // nie wiadomo czy pola bitowe układają się od lewej do prawej czy też 
    // odwrotnie.
    // *Kod operujący na polach bitowych jest zazwyczaj dużo jaśniejszy niż 
    // odpowiadające mu jawne operacje na maskach bitowych.

int main (int argc, char **argv){
    //pole bitowe 
    // typ nazwa : dlugosc;
    // dlugosc - liczba bajtow.
    return 0;
}
