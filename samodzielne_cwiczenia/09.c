//Co wypisze kompilator?
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

struct {unsigned int var_1;
        unsigned int var_2;} status1;

struct {unsigned int var_1 : 2;
        unsigned int       : 4;
        unsigned int var_2 : 3;} status2;

int main(int argc, char *argv[]){
    printf( "size status1 : %lu \n", sizeof(status1));
        // '8'
        //W przypadku większości systemów, unsigned int ma rozmiar 4 bajtów (32 bity),
        //dlatego sizeof(status1) zwraca 8 bajtów (64 bity), ponieważ łączny rozmiar 
        //dwóch zmiennych to 8 bajtów.
    printf( "size status2 : %lu \n", sizeof(status2));
        // '4'
        //W przypadku większości systemów, 2 bity i 3 bity mogą być przechowywane w 
        //jednym bajcie, więc sizeof(status2) zwraca 4 bajty (32 bity), ponieważ to 
        //jest minimalny rozmiar wymagany do przechowania pól bitowych.

    status2.var_1 = 5;
    status2.var_2 = 5;
    printf( "status.var_1 = %u, status2.var_2 = %u \n", status2.var_1, status2.var_2);
    //Co do przypisania wartości, status2.var_1 = 5 przypisuje wartość 5 do pola var_1,
    //ale ponieważ var_1 ma rozmiar 2 bity, ta wartość zostaje zredukowana do 1, ponieważ 5 
    //jest reprezentowane binarnie jako 101, a tylko 2 bity są dostępne. Natomiast status2.var_2 = 5 
    //przypisuje wartość 5 do pola var_2, a ponieważ var_2 ma rozmiar 3 bity, wartość ta zostaje zachowana.
    //W efekcie po wykonaniu status2.var_1 = 5, status2.var_1 ma wartość 1 (zredukowaną), a status2.var_2 = 5 zachowuje wartość 5.


    return 0;
}
//ODPOWIEDZ
// size status1 : 8 
// size status2 : 4 
// status.var_1 = 1, status2.var_2 = 5 
