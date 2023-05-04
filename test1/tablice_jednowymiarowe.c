#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 6

void set_array(double *start, double *end, double value){
    while(start<end){
        *start++ = value;
    }
}

void set_array_2(double *start, size_t n, double value){
    for(size_t i = 0; i < n; i++){
        *(start+i) = value;
    }
}

int main() {
    double array1[SIZE];
    size_t n = SIZE;
    double array2[n];
    double *array3 = malloc(n*sizeof(double));

    //1
    set_array(array1, array1 + SIZE, 12.);
    for (size_t i = 0; i <SIZE; i++){
        printf("%f ", *(array1+i));
    }
    printf("\n");

    set_array(array2, array2 + SIZE, 13.);
    for (size_t i = 0; i <SIZE; i++){
        printf("%f ", *(array2+i));
    }
    printf("\n");

    set_array(array3, array3 + SIZE, -100.);
    for (size_t i = 0; i <SIZE; i++){
        printf("%f ", *(array3+i));
    }
    printf("\n\n\n");

    //2
    set_array_2(array1, SIZE, 10293.);
    for (size_t i = 0; i <SIZE; i++){
        printf("%f ", *(array1+i));
    }
    printf("\n");

    free(array3);
    array3 = NULL;
}
// 12.000000 12.000000 12.000000 12.000000 12.000000 12.000000 
// 13.000000 13.000000 13.000000 13.000000 13.000000 13.000000 
// -100.000000 -100.000000 -100.000000 -100.000000 -100.000000 -100.000000 


// 10293.000000 10293.000000 10293.000000 10293.000000 10293.000000 10293.000000 
