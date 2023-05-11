#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

struct foo{
    int m;
    struct {
        float x;
        float n;
    };
};

int main (int argc, char **argv){
    struct foo t;
    //bezposredni dostep do pola struktury anonimowej:
    t.n = 1300;
    t.m = 2300;
    printf("%d, %f", t.m, t.n);
    
    return 0;
}
             
// 2300, 1300.000000
