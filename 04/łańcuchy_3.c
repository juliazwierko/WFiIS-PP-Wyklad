#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    //Lancuchy - tablice znakow 

//1    
    //W języku C łańcuch to jednowymiarowa tablica znaków zakończona znakiem końca łańcucha (’\0’).

    char str[] = "tekst";
    //W wersji tablicowej, znaki można modyfikować, podobnie jak elementy dowolnej tablicy.
    //W wersji tablicowej str jest nazwą tablicy.
    const char *pstr = "TEKST";
    //W wersji wskaźnikowej, wskaźnik wskazuje na literał łańcuchowy, czyli stałą, której nie można modyfikować.
    //W wersji wskaźnikowej pstr jest zmienną, którą może wskazywać dowolną inną stałą łańcuchową.
    //adres tablicy - adres pierwszego znaku; ptsr = &ptsr[0]

    //Zmienna pstr może wskazywać na dowolny łańcuch: 
    //pstr=&"TEKST"[1];


    char string[] = "julcia";
    puts(string);
    const char *pointer = "pupcia";
    string[0] = 'J';
    puts(string);
    //*pointer=’t’;//Naruszenie ochrony pamieci

//2
    puts(str);
    puts(pstr);
    printf("%s, %s\n", str, pstr);

    printf("\n");
    return 0;    
}
