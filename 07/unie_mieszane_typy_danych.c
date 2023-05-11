#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <math.h>
#define INT_NUMBER 0
#define DOUBLE_NUMBER 1

struct number{
    union {
        double dvar;
        int ivar;
    } uvar;
    char type;
}; 

void print_number(struct number tmp){
    if (tmp.type == INT_NUMBER)
        printf("int = %d\n", tmp.uvar.ivar);
    else 
        printf("double = %lf\n", tmp.uvar.dvar);
}

int main (int argc, char **argv){
    struct number a,b;

    a.type=INT_NUMBER; 
    a.uvar.ivar=57; 
    b.type=DOUBLE_NUMBER; 
    b.uvar.dvar=12.34;

    print_number(a);
    print_number(b);

    return 0;
}
// int = 57
// double = 12.340000
