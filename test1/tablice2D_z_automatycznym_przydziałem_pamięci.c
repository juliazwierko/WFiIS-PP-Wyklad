#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ROWS 3 // Trzy wiersze
#define COLS 2 // Dwie kolumny

void array_2d(double (*row)[COLS], size_t rows, double value){
    for(size_t w = 0; w < rows; ++w){
        for(size_t k = 0; k < COLS; ++k)
            *(*(row + w) + k) = value;
    }
}

void arra_2d_2wersja(size_t cols, double (*row)[cols], size_t rows, double value){
    for(size_t w = 0; w < rows; ++w){
        for(size_t k = 0; k < cols; ++k){
            *(*(row+w)+k) = value;
        }
    }
}

int main() {
    double tab1[ROWS][COLS];

    // 1 funkcja 
    array_2d(tab1, ROWS, 12.);
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            printf("%f ", *(*(tab1+i)+j));
        }
        printf("\n");
    }
    printf("\n");

    // 2 funkcja
    arra_2d_2wersja(COLS, tab1, ROWS, 1120.);
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            printf("%f ", *(*(tab1+i)+j));
        }
        printf("\n");
    }

    // tablica o stalych rozmiarach zdefinowanych prez zmienne
    size_t rows = ROWS + 1;
    size_t cols = COLS +1;
    int array2[rows][cols];
    return 0;
}
// 12.000000 12.000000 
// 12.000000 12.000000 
// 12.000000 12.000000 

// 1120.000000 1120.000000 
// 1120.000000 1120.000000 
// 1120.000000 1120.000000 
