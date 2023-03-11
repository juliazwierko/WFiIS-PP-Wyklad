#include <stdio.h>
#include <stdlib.h> 
#define ROWS 4
#define COLS 3

int main(){

    //Tablica welowymiarowa:
    //typ nazwaT[liczba-wierszy][liczba-kolumn];
    int tab_1[3][2];
    /*
    przedstawienie w postaci macierzy:
        (0)(1)
    (o) 00 01
    (1) 10 11
    (2) 20 21

    Oto jak przechowywana jest w pamięci tablica m:
            i = 0           i = 1           i = 2
        m[0][0]m[0][1]   m[1][0]m[1][1]  m[2][0]m[2][1]    
    */

    //inicjalizacja tablicy dwuwymiarowej
    //4 tablicy z 5 elementami
    int tab_2[4][5] = { {1,2,3,4,5},
                        {6,7,8,9,10},
                        {5,4,3,2,1},
                        {10,9,8,7,6} };

    int *p = &tab_2[0][0];
    int j=0;
    for(; p<= &tab_2[COLS-1][ROWS-1]; p++){
        *p = j++;
    }

    for(int i=0; i<(COLS); i++){
        for(int j=0; j<(ROWS); j++){
            printf("%d ",tab_2[i][j]);
            
        }
        printf("\n");
    }
    printf("\n");
    /*
    0 1 2 3 
    5 6 7 8 
    10 11 12 13     
    */     

    int a[10][10];
    a[1][2] = 32;
    //X[Y] ≡ *(X+Y)

    //*(a[1]+2) = 32;

    //*(*(a+1)+2) = 32;
    //X[p][q] ≡ *( *(X + p) + q)

    //*(*a+12) = 32;
    //X[p][q] ≡ *( *X + p * długość wiersza + q )

    //(*a)[12] = 32;
    return 0;
}
