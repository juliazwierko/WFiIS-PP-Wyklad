#include <stdlib.h>
#include <stdio.h>
#include <string.h>

float fun(float x){
    return 1.0F/(1.0F + x*x);
}
   
float fun1(float x){
    return x/(1.0F+x*x);
}

float integrate(float (*f)(float), float a, float b, float n) {
    //trapezodial rule
    float h = (b - a)/n;
    float s = f(a) + (*f)(b);

    return s+h;
}

int main(int argc, char *argv[]) {
    //wskaznik do funkcji
    float res = integrate(fun, 1.0F, 10.0F, 10.0F);
    printf("I1(%0.1f,␣%0.1f,␣%0.1f)␣=␣%f\n\n", 1.0F, 10.0F, 10.0F, res);
    //I1(1.0,␣10.0,␣10.0)␣=␣1.409901

    return 0; 
}
