// Zbadajmy wpływ ułożenia pól w strukturze na jej rozmiar.
// Zdeklarujmy 3 struktury, w komentarzu zapisano rozmiary pól.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//naglowek!!!
#include <stddef.h>

struct cic{ 
    char a; //1
    char b; //4 
    char c; //1
};

struct icc{
    int b; //4
    char a; //1
    char c; //1
};

struct cci{
    char a; //1
    char c; //1
    int b; //4
};

int main (int argc, char **argv){
    printf("%ld\n", sizeof(struct cic)); // 12 
    printf("%ld\n", sizeof(struct icc)); // 8 
    printf("%ld\n\n", sizeof(struct cci)); // 8
    // 3
    // 8
    // 8

    //Wytlumaczenie:

    // W przypadku struktury cic, składa się ona z pola a typu char 
    // zajmującego 1 bajt oraz pola b typu int zajmującego 4 bajty. 
    // Jednak, aby zapewnić porządek w pamięci i dostępność do 
    // poszczególnych pól, kompilator dokonuje "wyrównywania" 
    // pól struktury. W tym przypadku, aby zachować wyrównanie do 4 bajtów,
    // pole a jest uzupełnione do 4 bajtów (3 bajty pustej przestrzeni), 
    // a pole b zajmuje kolejne 4 bajty, czyli łącznie 4 + 4 + 4 = 12 bajtów.


    // W przypadku struktury icc, pola b i a są odwrócone, 
    // ale z powodu wyrównywania, pole b i tak musi zajmować 4 bajty,
    // a pole a zajmuje tylko 1 bajt. W efekcie, 

    // struktura icc zajmuje 4 + 1 + 3 = 8 bajtów.

    // W przypadku struktury cci, pola a i c zajmują łącznie 2 bajty,
    // a pole b zajmuje 4 bajty. Wyrównanie do 4 bajtów wymaga 
    // uzupełnienia pól a i c do 4 bajtów, czyli w sumie 2 + 2 = 4 
    // bajty pustej przestrzeni, co razem z polem b daje r
    // ozmiar 4 + 4 = 8 bajtów.


    //biblioteka <stddef.h>
    //size t offsetof(type, member)
    printf("a=%ld␣",offsetof(struct cci, a)); 
    printf("b=%ld␣",offsetof(struct cci, b)); 
    printf("c=%ld␣\n\n",offsetof(struct cci, c));
    //a=0␣b=4␣c=1␣

    printf("a=%ld␣",offsetof(struct icc, a)); 
    printf("b=%ld␣",offsetof(struct icc, b)); 
    printf("c=%ld␣\n\n",offsetof(struct icc, c));
    //a=4␣b=0␣c=5␣

    printf("a=%ld␣",offsetof(struct cic, a)); 
    printf("b=%ld␣",offsetof(struct cic, b)); 
    printf("c=%ld␣",offsetof(struct cic, c));
    //a=0␣b=1␣c=2␣

    printf("\n");
    return 0;
}
