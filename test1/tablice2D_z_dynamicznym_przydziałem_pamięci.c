#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROWS 3 // Trzy wiersze
#define COLS 2 // Dwie kolumny

size_t get_i(size_t w, size_t k, size_t cols){
    return w * COLS + k;
}

int main(void){
    //1
    double *tab3 = malloc(ROWS * COLS * sizeof(double));
    for(size_t w = 0; w < ROWS; ++w){
        for(size_t k = 0; k < COLS; k++){
            size_t i = get_i(w, k, COLS);
            *(tab3 + i) = 13.55;
            printf("%f, ", *(tab3 + i));
        }
        printf("\n");
    }
    // O -> (13.5)(13.5)(13.5)(13.5)(13.5)
    free(tab3);
    printf("\n");

    //2
    double **tab4 = malloc(sizeof(double *));
    *tab4 = malloc(COLS * ROWS * sizeof(double));
    for(size_t w = 0; w < ROWS; ++w){
        for(size_t k = 0; k <COLS; ++k){
            size_t i = get_i(w, k, COLS);
            *(*tab4 + i) = 14.0;
            printf("%f ", *(*tab4 + i));
        }
        printf("\n");
    }
    free(*tab4);
    free(tab4);
    printf("\n");

    double **tab5 = malloc(ROWS * sizeof(double *)); // Alokacja pamięci na ROWS wskaźników.
    *tab5 = malloc(ROWS * COLS * sizeof(double)); // Alokacja pamięci na wszystkie elementy tablicy 2D.
    for (size_t w = 1; w < ROWS; ++w) // Adres początku każdego kolejnego wiersza...
        *(tab5 + w) = *tab5 + w * COLS; // zostaje przypisany do odpowiedniego wskaźnika.
    for (size_t w = 0; w < ROWS; ++w){
        for (size_t k = 0; k < COLS; ++k){
            *(*(tab5 + w) + k) = 15.5; 
            printf("%f ", *(*(tab5 + w) + k));
        }
        printf("\n");
    }
    free(*tab5);
    free(tab5);
    printf("\n");

    
    //3
    double *tab6[ROWS];
    for(size_t w = 0; w < ROWS; ++w){
        *(tab6 + w) = malloc(COLS * sizeof(double));
    }

    for(size_t w = 0; w < ROWS; ++w){
        for (size_t k = 0; k < COLS; ++k){
            *(*(tab6 + w) + k) = 16.5;
            printf("%f ", *(*(tab6 + w) + k));
        }
        printf("\n");
    }
    for (size_t i = 0; i < ROWS; i++){
        free(*(tab6 + i));
    }
    printf("\n");

    //4
    double (*tab7)[COLS];
    tab7 = malloc(ROWS * COLS * sizeof(double));
    for(size_t w = 0; w < ROWS; w++){
        for(size_t i = 0; i < COLS; i++){
            *(*(tab7 + w) + i) = 17.5;
            printf("%f ", *(*(tab7 + w) + i));
        }
        printf("\n");
    }
    free(tab7);
    printf("\n");

    //5
    double **tab8 = malloc (ROWS * sizeof(double *));
    for(size_t w = 0; w < ROWS; ++w)
        *(tab8 + w) = malloc(COLS * sizeof(double));

    for(size_t w = 0; w < ROWS; w++){
        for(size_t k = 0; k < COLS; k++){
            *(*(tab8 + w) + k) = 18.5;
            printf("%f ", *(*(tab8 + w) + k));
        }
        printf("\n");
    }
    for(size_t i = 0; i < ROWS; i++){
        free(*(tab8 + i));
    }
    return 0;
}
//OUTPUT:

//1
// 13.550000, 13.550000, 
// 13.550000, 13.550000, 
// 13.550000, 13.550000, 

//2
// 14.000000 14.000000 
// 14.000000 14.000000 
// 14.000000 14.000000 

//3
// 15.500000 15.500000 
// 15.500000 15.500000 
// 15.500000 15.500000 

//4
// 16.500000 16.500000 
// 16.500000 16.500000 
// 16.500000 16.500000 

//5
// 17.500000 17.500000 
// 17.500000 17.500000 
// 17.500000 17.500000 

//6
// 18.500000 18.500000 
// 18.500000 18.500000 
// 18.500000 18.500000 
