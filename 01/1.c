#include <stdlib.h>
#include <stdio.h>

int main(void){
    //  void *
    
    // Wskaźnik typu void * można przypisać dowolnemu innemu wskaźnikowi.
    // Wskaźnikowi typu void * można przypisać dowolny inny wskaźnik. void * pozwala zdefiniować parametr funkcji, która może przyjąć jako
    // argument wskaźnik dowolnego typu.
    // void * umożliwia dostęp pamięci (np. malloc), gdy przeznaczenie takiej pamięci nie jest jeszcze znane.
    // Nie można wykonywać operacji arytmetycznych na wskaźnikach typu void *.

    int a = 10;
    int *pa = &a;

    void *p; 
    p = pa;

    printf("%p, %p, %p", &a, pa, p);
    printf("\n\n\n");

    //  wskazniki przyklad
    int i;
    int *pi, *pj;

    i = 9;
    pi = &i;
    pj = pi;
    printf("A:&pi=%p, &pj=%p, &i=%p\n",&pi, &pj, &i); 
    printf("W:pi=%p, pj=%p, i=%d\n\n", pi, pj, i);

    *pj = 123;
    printf("A:&pi=%p, &pj=%p, &i=%p\n",&pi, &pj, &i); 
    printf("W:pi=%p, pj=%p, i=%d\n", pi, pj, i);
    return 0;
}
// A: &pi=0x16d9ab360, &pj=0x16d9ab358, &i=0x16d9ab368
// W: pi=0x16d9ab368, pj=0x16d9ab368, i=123
// W: *pi = 123, *pj = 123
