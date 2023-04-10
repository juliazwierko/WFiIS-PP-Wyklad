#include <stdlib.h>
#include <stdio.h>
#define SIZE 10

int suma(int *start, int *end);

int main(void){
    int tab[SIZE] = {0,1,2,3,4,5,6,7,8,9};
    int a = suma(tab, tab + SIZE);
    printf("%d", a);

    return 0;
}

int suma(int *start, int *end){
    int total = 0;
    while(start<end){
        total+=*(start++);
    }
    return total;
}
