#include <stdlib.h>
#include <stdio.h>

int main(void){
    // zapis tablic dwuwymiarowych:
    int a[10][10]; 
    a[1][2] = 32;
    //X[Y] ≡ *(X+Y) 
    *(a[1]+2) = 32;

    *(*(a+1)+2) = 32;

    //X[p][q] ≡ *( *(X + p) + q) 
    *(*a+12) = 32;

    //X[p][q] ≡ *( *X + p * długość wiersza + q ) 
    *a[12] = 32;
    return 0;
}
