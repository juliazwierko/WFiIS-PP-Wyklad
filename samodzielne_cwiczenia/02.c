#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main(int argc, char *argv[]){
    union Data data;
    
    data.i = 10;
    data.f = 220.5;
    strcpy( data.str, "C Programming");

    printf("data.i : %d\n", data.i);
    printf("data.f : %f\n", data.f);
    printf("data.str : %s\n", data.str);

    return 0;
}
/*
    Wypisano zostało:

    data.i : 1917853763
    data.f : 4122360580327794860452759994368.000000
    data.str : C Programming
*/
