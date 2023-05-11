#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#define BLUE 1 //bit 0
#define GREEN 2 //bit 1
#define RED 4 //bit 2

int main (int argc, char **argv){
    // unsigned short int - 16 bitów, 
    //najbardziej znaczący bit to 15, a najmniej znaczący bit to 0.
    unsigned short int i = 0x0000;
    // 0000 0000 0000 0000

    //Ustawianie bitu - ustawianie 4 bitu przy pomocy maski bitowej.
    i |= 0x0010;
    // 0000 0000 0001 0000
    i = 0X0000;
    i |= 1 << 4;
    // 0000 0000 0001 0000

    //Kasowanie bitu - kasowanie 4 bitu przy pomocy maski bitowej.
    i = 0x00ff;
    // 0000 0000 1111 1111
    i &= ~0x0010;
    // 0000 0000 1110 1111
    i = 0x00ff;
    // 0000 0000 1111 1111
    i &= ~(1 << 4);
    // 0000 0000 1110 1111

    //Testowanie bitu - sprawdzanie czy 4 bit jest ustawiony. 
    if ( i & 0x0010) //..........
    if ( i & 1 << 4) //...........


    i |= BLUE; // ustawiamy bit BLUE
    i &= ~BLUE; // kasujemy bit BLUE
    if (i & BLUE) 
        printf("Julcia"); // sprawdzamy bit BLUE
    i |= BLUE | GREEN; //ustawiamy bity BLUE i GREEN 
    i &= ~(BLUE | GREEN); //kasujemy bity BLUE i GREEN
    if (i & (BLUE | GREEN)) 
        printf("Pupcia");//sprawdzamy czy bit BLUE lub GREEN jest ustawiony
    return 0;
}
