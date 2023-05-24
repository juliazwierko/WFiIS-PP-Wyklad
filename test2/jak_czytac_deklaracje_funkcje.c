#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    //1
        double fun1(int); 
        //fun1 to funkcja, przyjmująca argument typu int 
        //i zwracająca double'a (liczbę zmiennoprzecinkową).

    //2 
        double *fun2(int);
        //fun2 to funkcja, przyjmująca argument typu int 
        //i zwracająca wskaźnik do double'a.

    //3
        double **fun3(int);
        //fun3 to funkcja, przyjmująca argument typu int 
        //i zwracająca wskaźnik do wskaźnika na double'a.

    //4
        double (*fun_ptr1)(int);
        //fun_ptr1 to wskaźnik do funkcji przyjmującej argument typu int 
        //i zwracającej double'a.

    //5
        double *(*fun_ptr2)(int);
        //fun_ptr2 to wskaźnik do funkcji przyjmującej argument typu int 
        //i zwracającej wskaźnik do double'a.

    //6 
        double **(*fun_ptr3)(int);
        //fun_ptr3 to wskaźnik do funkcji przyjmującej argument typu int 
        //i zwracającej wskaźnik do wskaźnika na double'a.
    return 0;
}
