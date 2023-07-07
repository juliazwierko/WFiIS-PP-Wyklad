// Wskaźniki – podsumowanie
 double x; // Prosta zmienna typu double.
 double *p_x; // Wskaźnik na liczbę typu double.
 double **pp_x; // Wskaźnik na wskaźnik na double'a.
 double ***ppp_x; // Wskaźnik na wskaźnik do wskaźnika na double'a. 

 x = 1.5; // Przypisanie wartości zmiennoprzecinkowej.
 p_x = &x; // Przypisanie adresu zmiennej x.
 pp_x = &p_x; // Przypisanie adresu zmiennej p_x.
 ppp_x = &pp_x; // Przypisanie adresu zmiennej pp_x.

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define ROWS 3 // Trzy wiersze
#define COLS 2 // Dwie kolumny

// #1       d_array_2D_set_value1(tab1, ROWS, 11.1); 
void d_array_2d_set_value1(double (*row)[COLS], size_t rows, double value)
{
    for (size_t w = 0; w < rows; ++w)
        for (size_t k = 0; k < COLS; ++k)
            *(*(row + w) + k) = value;
}

// #2       d_array_2D_set_value2(COLS, tab1, ROWS, 11.1);   
void d_array_2D_set_value2(size_t cols, double (*row)[cosl], size_t rows, double value)
{   
    for (size_t w = 0; w < rows, ++w)
        for (size_t k = 0; k < cols; ++k)
            *(*(row + w) + k) = value;
}

int main() 
{
    double tab1[ROWS][COLS];


    return 0;
}
