#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){
    //  arytmetyka wskaznikow
    int a[10], *p;
    p = a;

    int licz = 1;
    int size = sizeof(a)/sizeof(int);
    for(int i=0; i<size; i++){
        *(p+i) = licz++;
        printf("%d ", *(a+i)); //1 2 3 4 5 6 7 8 9 10 
    }
    printf("\n\n");


    // wskazniki i tablice
    int array[10]={20,10,5,39,4,16,19,26,31,20};
    int total = 0, *parray = array;

    for(int i=0; i<10; i++){
        total += *(parray+i);
    }
    printf("Suma elementow array: %d", total);

    //  START END I PETLIA WHILE
    int array_while[10]={20,10,5,39,4,16,19,26,31,20};
    int total_while = 0;
    int *start = array;
    int *end = array+10;

    while(start<end){
        total_while += *start++;
    }
    printf("\nSuma elementow array_while: %d\n\n", total_while);


    // ZAPIS (potrzebne dla kolosa!!!)
    // Aby odwołać się do elementu o indeksie 4 w tablicy a można skorzystać z:
    // a[4], *(p+4), *(a+4), *(4+a), *(4+p), p[4], 4[a], 4[p].
    int tablica[6] = {0,1,2,3,4,5};
    int *wsk = tablica;
    printf("Tablice i wskazniki - zapis:\n%d\n", (tablica[4]));
    printf("%d\n", *(wsk+4));
    printf("%d\n", *(tablica+4));
    printf("%d\n", wsk[4]);
    printf("%d\n", 4[wsk]);
    printf("%d\n", 4[tablica]);
    printf("\n");
    return 0;
}
