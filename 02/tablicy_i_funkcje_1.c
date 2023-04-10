#include <stdlib.h>
#include <stdio.h>

// 3 sposoby deklaracji funkcji func():
// void func(int *x); 
// void func(int x[10]); 
// void func(int x[]);
void func_1(int *x);
void func_2(int x[10]);
void func_3(int x[]);

int main(void){
    int tab[10];
    func_1(tab);
    func_2(tab);

    func_3(tab);
    func_2(tab);

    return 0;
}

void func_1(int *x){
    for(int i=0; i<10; i++){
        *(x+i) = i; 
    }
}

void func_2(int x[10]){
    for(int i=0; i<10; i++){
        printf("%d", *(x+i));
    }
    printf("\n");
}

void func_3(int x[]){
    for(int i=0; i<10; i++){
        *(x+i) = 0;
    }
}
