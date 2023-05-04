#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROWS 3 // Trzy wiersze
#define COLS 2 // Dwie kolumny

void set_2d_array(double (*row)[COLS], size_t rows, double value){
    for(size_t i = 0; i < rows; ++i){
        for(size_t w = 0; w < COLS; ++w){
            *(*(row+i) + w) = value;
        }
    }
}

void set_2d_array_2(size_t cols, double (*row)[cols], size_t rows, double value){
    for(size_t i = 0; i < rows; ++i){
        for(size_t w = 0; w < cols; ++w){
            *(*(row + i) + w) = value;
        }
    }
}

int main() {
    double tab1[ROWS][COLS];
    double tab2[ROWS][COLS];

    set_2d_array(tab1, ROWS, 11.99);
    

    for(size_t w = 0; w < ROWS; w++){
        for(size_t i = 0; i < COLS; i++){
            printf("%f, ", *(*(tab1+w)+i));
        }
        printf("\n");
    }
    printf("\n");

    set_2d_array_2(COLS, tab2, ROWS, 12.5);
    for(size_t w = 0; w < ROWS; w++){
        for(size_t i = 0; i < COLS; i++){
            printf("%f, ", *(*(tab2+w)+i));
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
11.990000, 11.990000, 
11.990000, 11.990000, 
11.990000, 11.990000, 

12.500000, 12.500000, 
12.500000, 12.500000, 
12.500000, 12.500000,
