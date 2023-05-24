#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    //1
        double x;
        typedef double REAL;
        REAL x; //A - zamiast double;

    //2
        double *px;
        typedef REAL *POINTER_TO_REAL;
        POINTER_TO_REAL px; //px to wskaźnik do liczby zmiennoprzecinkowej typu double

    //3
        double **ppx;
        typedef POINTER_TO_REAL *POINTER_TO_POINTER_TO_REAL;
        POINTER_TO_POINTER_TO_REAL ppx; //ppx to wskaźnik do wskaźnika na double'a. 
    return 0;
}
