#include <stdlib.h>
#include <stdio.h>

int main(){
    //kwalifikatory typu - restrict

    //Kwalifikator typu restrict odnosi się wyłącznie do wskaźników. 
    //Stwierdza on, że wskaźnik jest jedynym środkiem dostępu do danych.
    int * restrict rtab = malloc(10*sizeof(int));

    return 0;    
}
