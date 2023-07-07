#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define ROWS 3 // Trzy wiersze
#define COLS 2 // Dwie kolumny

size_t get_i(size_t w, size_t k, size_t cols)
{
    return w * cols + k;
}

int main() 
{
    //alokacja ciągłego obszaru pamięci przy pomocy wskaźnika na double'a:
    double *tab3 = malloc(ROWS * COLS * sizeof(double));
    for(size_t w = 0; w < ROWS; ++w)
    {
        for(size_t k = 0; k < COLS; ++k)
        {
            size_t i = get_i(w,k, COLS);
            *(tab3 + i) = 13.5;
        }
    }
    free(tab3);

    //alokacja wskanika na wskaznik na typ double
    double **tab4 = malloc(sizeof(double *));
    *tab4 = malloc(ROWS * COLS * sizeof(double));

    for(size_t w = 0; w < ROWS; ++w)
    {
        for(size_t k = 0; k < COLS; ++k)
        {
            size_t i = get_i(w,k, COLS);
            *(*tab4 + i) = 14.5;
        }
    }
    free(*tab4);
    free(tab4);

    //alokacja ciaglego obszaru pamieci przy pomocy wskaznikow do wskaznikow na double'a
    double **tab5 = malloc(ROWS * sizeof(double *));
    *tab5 = malloc(ROWS * COLS * sizeof(double));
    for(size_t w = 1; w < ROWS; ++w)
        *(tab5 + w) = *tab5 + w * COLS;
    for(size_t w = 0; w < ROWS; ++w)
        for(size_t k = 0; k < COLS; ++k)
            *(*(tab5 + w) + k) = 15.5;
    free(*tab5);
    free(tab5);

    //alokacja nieciągłego obszaru przy pomocy tablicy wskaźników:
    double *tab6[ROWS];
    for(size_t w = 0; w < ROWS; ++w)
        *(tab6 + w) = malloc(COLS *sizeof(double));
    for(size_t w = 0; w < ROWS; ++w)
        for(size_t k = 0; k < COLS; ++k)
            *(*(tab + w) + k) = 16.5;
    for (size_t w = 0; w < ROWS; ++w)
        free(*(tab6 + w));
    
    //alokacja ciągłego obszaru przy pomocy wskaźnika do jednowymiarowej tablic
    double(*tab7)[COLS];
    tab7 = malloc(ROWS * COLS * sizeof(double));
    for(size_t w = 0; w < ROWS; ++w)
        for(size_t k = 0; k < COLS; ++k)
            *(*(tab7 + w) + k) = 17.5;
    free(tab7);

    //alokacja nieciągłego obszaru przy pomocy wskaźnika do wskaźnika:
    double **tab8 = malloc(ROWS * sizeof(double *));
    for(size_t w = 0; w < ROWS; ++w)
        *(tab8 + w) = malloc(COLS * sizeof(double));
    for (size_t w = 0; w < ROWS; ++w)
        for (size_t k = 0; k < COLS; ++k)
            *(*(tab8 + w) + k) = 18.5;  
    
    for (size_t w = 0; w < ROWS; ++w)
        free(*(tab8 + w));
    free(tab8);

    return 0;
}
