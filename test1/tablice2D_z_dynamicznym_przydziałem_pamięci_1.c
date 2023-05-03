#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROWS 3 // Trzy wiersze
#define COLS 2 // Dwie kolumny

size_t get_i(size_t w, size_t k, size_t cols){
    return (w*cols) + k;
}

int main() {
//1
//Alokacja ciągłego obszaru pamięci przy pomocy wskaźnika na double'a:
    double * tab3 = malloc (ROWS * COLS * sizeof(double)); //alokacja wszystkich elementow na raz
    for(size_t w = 0; w < ROWS; ++w){
        for(size_t k = 0; k < COLS; ++k){
            size_t i = get_i(w, k, COLS);
            *(tab3 + i) = 13.5;
            printf("%f ", *(tab3 + i));
        }
        printf("\n");
    }
    printf("\n");
    free(tab3);
    tab3 = NULL;

//2
//Alokacja ciągłego obszaru pamięci przy pomocy wskaźnika na wskaźnik na double'a:
    double **tab4 = malloc(sizeof(double *));
    *tab4 = malloc(ROWS * COLS * sizeof(double));

    for(size_t w = 0; w < ROWS; ++w){
        for(size_t k = 0; k < COLS; ++k){
            size_t i = get_i (w, k , COLS);
            *(*tab4 +i) = 14.5;
            printf("%f ", *(*tab4 + i));
        }
        printf("\n");
    }
    printf("\n");
    free(*tab4);
    *tab4 = NULL;

//3 
//Alokacja ciągłego obszaru pamięci przy pomocy wskaźników do wskaźnika na double'a:
    double **tab5 = malloc(ROWS * sizeof(double *));
    *tab5 = malloc(ROWS * COLS *sizeof(double));
    for(size_t w = 1; w < ROWS; ++w)
        *(tab5 + w) = *tab5 + w*COLS;
    for(size_t w = 0; w < ROWS; ++w){
        for(size_t k = 0; k < COLS; ++k){
            *(*(tab5 + w) + k) = 15.5;
            printf("%f", *(*(tab5 + w) + k));
        }
        printf("\n");
    }
    return 0;
}
// 13.500000 13.500000 
// 13.500000 13.500000 
// 13.500000 13.500000 

// 14.500000 14.500000 
// 14.500000 14.500000 
// 14.500000 14.500000 

// 15.50000015.500000
// 15.50000015.500000
// 15.50000015.500000
