#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define SIZ 4

int main() {
    //  Tablice wskaznikow
    //  typ *nazwa[rozmiar];

    float *x[10], v1, v2;

    x[2] = &v1;
    x[3] = &v2;
    x[4] = x[2];

    *x[2] = 23.3F;
    printf("%f\n", *x[2]);

    
    *x[3] = *(*(x+2)) + 7.12f;
    printf("%f, %f\n", 7.12F, *x[3]);
    return 0; 
}
