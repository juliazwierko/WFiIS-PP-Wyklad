#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define SIZ 4

int main() {
    //  MEMSET
    //  void *memset(void *dest, int ch, size_t n);
    //  kopiuje wartość ch (po konwersji na unsigned char) do każdego z pierwszych n znaków obiektu wskazywanego przez dest.
    
//  Przykład_1
    int a[SIZ];
    memset(a, 0, SIZ*sizeof(int));
    for( size_t i = 0; i < SIZ; i++)
        printf("a[%lu] = %d\n", i, a[i]);

//  Przyklad_2
    char str[] = "almost every programmer should know memset.";
    puts(str);
    //almost every programmer should know memset.
    memset(str, '.', 6);
    puts(str);
    //...... every programmer should know memset.

    memset(str+24, '.', 6);
    puts(str);
    //...... every programmer ...... know memset.
    return 0; 
}
