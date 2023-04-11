#include <stdlib.h>
#include <stdio.h>

int main(){
    //kwalifikatory typu const;
//1
    int a;
    int * const pts = &a; // pts jest stałym wskaźnikiem
    // pts ma stałą wartość, musi wskazywać zawsze na to samo miejsce w pamięci,
    // wartość zmiennej *pts może ulec zmianie.

//2
    const int b;
    const int * const ptt = &b; // ptt jest stałym wskaźnikiem do stałej.
    // pts i *pts nie mozemy zmieniac

//3
    // int *ptr
    // int * const ptr;
    // const int *ptr;
    // int const *ptr;
    // const int * const ptr;
    return 0;    
}
