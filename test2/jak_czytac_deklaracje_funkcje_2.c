#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    //1
        double (*tab6[10])(int);
        //tab6 jest tablicą dziesięciu wskaźników do funkcji 
        //przyjmujących argument typu int 
        //i zwracających double'a. 

    //2 
        double *(*tab7[10])(int);
        //tab7 jest tablicą dziesięciu wskaźników do funkcji
        //przyjmujących argument typu int 
        //i zwracających wskaźnik do double'a.

    //3
        double **(*tab8[10])(int);
        // tab8 jest tablicą dziesięciu wskaźników do funkcji, 
        // przyjmujących argument typu int 
        // i zwracających wskaźnik do wskaźnika na double'a.

    //4
        double (*fun4(int))[10];
        //fun4 jest funkcją przyjmującą argument typu int,
        //która zwraca wskaźnik do tablicy dziesięciu double'i.

    //5
        double (*(*fun_ptr4)(int))[10];
        // fun_ptr4 jest wskaźnikiem do funkcji przyjmującej argument typu int, która zwraca wskaźnik do tablicy dziesięciu double'i. Sposób czytania:
        //     fun_ptr4 // Pod nazwą fun_ptr4 mamy:
        //     *fun_ptr4 // wskaźnik...
        //     (*fun_ptr4)(int) // do funkcji przyjmującej argument typu int,
        //     *(*fun_ptr4)(int) // która zwraca wskaźnik...
        //     (*(*fun_ptr4)(int))[10] // do tablicy dziesięciu...
        //     double (*(*fun_ptr4)(int))[10]; // double'i.

    //6
        double *(*fun5(void))(int);
        //fun5 jest funkcją bezparametrową, która zwraca wskaźnik 
        //do funkcji przyjmującej argument typu int i zwracającej wskaźnik do double'a.

        // typedef double *(*F_POINTER)(int);
        // F_POINTER fun5(void);

    //7
        double *(*(*fun_ptr5)(void))(int);
        //fun_ptr5 jest wskaźnikiem do funkcji bezparametrowej, 
        //która zwraca wskaźnik do funkcji przyjmującej argument int 
        //i zwracającej wskaźnik do double'a.
        
        // F_POINTER (*fun_ptr5)(void);
        // lub ewentualnie:
        // typedef F_POINTER (*FF_POINTER)(void);
        // FF_POINTER fun_ptr5;

    //8
        double *(*(*fun6(int))[10])(char);
        //fun6 jest funkcją przyjmującą argument typu int
        //i zwracającą wskaźnik do tablicy dziesięciu wskaźników do funkcji 
        //przyjmujących argument typu char 
        //i zwracających wskaźnik do double'a. 

        // typedef double *(*PTR_TO_SIMPLE_FUN)(char);
        // PTR_TO_SIMPLE_FUN(*fun6(int))[10];

    //9
        double *(*(*(*fun_ptr6)(int))[10])(char);
        // fun_ptr6 jest wskaźnikiem do funkcji przyjmującej argument typu int 
        //i zwracającej wskaźnik do tablicy dziesięciu wskaźników do funkcji przyjmujących argument typu char 
        //i zwracających wskaźnik do double'a. 
        
        //Sposób czytania:
        //     fun_ptr6 // Pod nazwą fun_ptr6 mamy:
        //     *fun_ptr6 // wskaźnik...
        //     (*fun_ptr6)(int) // do funkcji przyjmującej argument typu int
        //     *(*fun_ptr6)(int) // i zwracającej wskaźnik...
        //     (*(*fun_ptr6)(int))[10] // do tablicy dziesięciu...
        //     *(*(*fun_ptr6)(int))[10] // wskaźników...
        //     (*(*(*fun_ptr6)(int))[10])(char) // do funkcji przyjmujących argument typu char
        //     *(*(*(*fun_ptr6)(int))[10])(char) // i zwracających wskaźnik...
        //     double *(*(*(*fun_ptr6)(int))[10])(char); // do double'a.

        //typedef double *(*PTR_TO_SIMPLE_FUN)(char);
        // typedef PTR_TO_SIMPLE_FUN ARR_PTR_TO_SIMPLE_FUN[10]; 
        // typedef ARR_PTR_TO_SIMPLE_FUN *PTR_TO_ARR; 
        // typedef PTR_TO_ARR (*CRAZY_POINTER)(int); 
        // CRAZY_POINTER fun_ptr6;  

    //10
        double (*(*(*ptr3)(void))(char, float))(int);
        //Wskaźnik do bezparametrowej funkcji, 
        //która zwraca wskaźnik do funkcji przyjmującej 
        //dwa argumenty (typu char i float) 
        //i zwracającej wskaźnik do funkcji, która przyjmuje int-a i zwraca double'a. 
    return 0;
}
