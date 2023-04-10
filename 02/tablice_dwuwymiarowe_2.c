#include <stdlib.h>
#include <stdio.h>
#define N_ROWS 120 
#define N_COLS 230 
#define ROW_TO_PROCESS 12

int main(){
    float tab[N_ROWS][N_COLS]; 
    int i=ROW_TO_PROCESS;

///////////Iterowanie elementów wiersza tablicy 2d///////////

    //Iterujemy od tab[i][0] do tab[i][N COLS − 1]. 
    float *fp = &tab[i][0];
    fp = &(*(tab[i]+0));
    fp = tab[i];
    for( ; fp < tab[i] + N_COLS; fp++) 
        *fp=0;

///////////Iterowanie elementów kolumny tablicy 2d///////////
    float tab[N_ROWS][N_COLS], (*fp)[N_COLS];
    int i = COL_TO_PROCESS;
    //(∗fp)[N COLS] - fp to wskaźnik do tablicy o długości N COLS.
    for(fp=&tab[0]; fp < &tab[N_ROWS]; fp++)
        (*fp)[i]=0;


    //MOZEMY UPROSCIC DO TAKIEJ POSTACI: 
    for(fp=tab ; fp < tab+N_ROWS; fp++) 
        (*fp)[i]=0;
    return 0;
}
