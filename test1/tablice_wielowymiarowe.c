#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define M 2 // Rozmiar w pierwszym wymiarze. 
#define N 3 // Rozmiar w drugim wymiarze. 
#define O 4 // Rozmiar w trzecim wymiarze. 
#define P 5 // Rozmiar w czwartym wymiarze.

void d_array_nd(double (*tab)[N][O][P], size_t m_size, double value){
  for (size_t m = 0; m < m_size; ++m) 
      for (size_t n = 0; n < N; ++n) 
          for (size_t o = 0; o < O; ++o) 
              for (size_t p = 0; p < P; ++p) 
                  *(*(*(*(tab + m) + n) + o) + p) = value; 
}

int main() {
    double tab_nD[M][N][O][P];
    
    return 0;
}
