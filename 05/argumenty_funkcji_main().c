#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

    //argc - int
    //argv to wskaznik do tablicy lancuchow

    //Łańcuchy reprezentujące liczby muszą zostać skonwertowane przy pomocy funkcji atoi(), atof().
    int x = atoi(argv[1]);

    printf("%d\n", x);
    printf("%s\n", argv[1]);

    int licz = 0;
    for(size_t i=0; i<strlen(argv[1]); i++){
        licz += *(argv[1]+i);
    }
    printf("ASCII - %d", licz);

    //OUTPUT:
    // 12
    // 12.7
    // ASCII - 200
    
    return 0; 
}
