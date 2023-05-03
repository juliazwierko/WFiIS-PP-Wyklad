#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ROWS 3 // Trzy wiersze
#define COLS 2 // Dwie kolumny

void d_array(double *start, double *end, double value){
    while(start<end){
        *start++= value;
    }
}

void d_array2(double *start, size_t n, double value){
    for(size_t i = 0; i < n; i++){
        *(start +i) = value;
    }
}

int main() {
    int n = 4;
    double *array = malloc(n * sizeof(double));
    //1
    for(size_t i = 0; i < n; i++){
        printf("%f, ", *(array+i));
    }
    printf("\n");

    d_array(array, array+n, 13.);

    for(size_t i = 0; i < n; i++){
        printf("%f, ", *(array+i));
    }
    printf("\n");


    //2
    d_array2 (array, n, 23.);
    for(size_t i = 0; i < n; i++){
        printf("%f, ", *(array+i));
    }
    printf("\n");
      
    //Zwolnienie pamieci!
    free(array);
    array = NULL:
    return 0;
}
// 0.000000, 0.000000, 0.000000, 0.000000, 
// 13.000000, 13.000000, 13.000000, 13.000000, 
// 23.000000, 23.000000, 23.000000, 23.000000, 
