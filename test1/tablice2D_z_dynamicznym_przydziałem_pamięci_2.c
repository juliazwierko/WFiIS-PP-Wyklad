#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROWS 3 // Trzy wiersze
#define COLS 2 // Dwie kolumny

size_t get_i(size_t w, size_t k, size_t cols){
    return (w*cols) + k;
}

int main() {
//4 
//Alokacja nieciągłego obszaru przy pomocy tablicy wskaźników:
    double *tab6[ROWS];

    for (size_t w = 0; w < ROWS; ++w)
        *(tab6 + w) = malloc(COLS * sizeof(double)); //osobna alokacja
    
    for(size_t w = 0; w < ROWS; ++w){
        for(size_t k = 0; k < COLS; ++k){
            *(*(tab6 + w) + k) = 16.5;
            printf("%f ", *(*(tab6 + w) + k));
        }
        printf("\n");
    }
    printf("\n");
    for(size_t w = 0; w < ROWS; ++w){
        free(*(tab6+w));
    }

//5
//Alokacja ciągłego obszaru przy pomocy wskaźnika do jednowymiarowej tablicy:
    double (*tab7)[COLS];
    tab7 = malloc (ROWS * COLS * sizeof(double));
    for(size_t w = 0; w < ROWS; ++w){
        for(size_t k = 0; k < COLS; ++k){
            *(*(tab7 + w) + k) = 17.5;
            printf("%f ", *(*(tab7 + w) + k));
        }
        printf("\n");
    }
    printf("\n");
    free(tab7);
    tab7 = NULL;

//6
//Alokacja nieciągłego obszaru przy pomocy wskaźnika do wskaźnika:
    double **tab8 = malloc(ROWS * sizeof(double *));
    for(size_t w = 0; w < ROWS; ++w)
        *(tab8 + w) = malloc(COLS *sizeof(double));
    
    for (size_t w = 0; w < ROWS; ++w){
        for (size_t k = 0; k < COLS; ++k){
            *(*(tab8 + w) + k) = 18.5; 
            printf("%f ", *(*(tab8 + w) + k));
        }
        printf("\n");
    }
    for(size_t w = 0; w < ROWS; w++){
        free(*(tab8+w));
    }
    free(tab8);
    return 0;
}
// 16.500000 16.500000 
// 16.500000 16.500000 
// 16.500000 16.500000 

// 17.500000 17.500000 
// 17.500000 17.500000 
// 17.500000 17.500000 

// 18.500000 18.500000 
// 18.500000 18.500000 
// 18.500000 18.500000 
