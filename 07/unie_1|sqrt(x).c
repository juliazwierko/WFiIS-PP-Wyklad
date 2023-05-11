#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <math.h>

union u_type{
    int i; //4 bajty;
    char ch; //1 bajt;
} u; //cala unia zajmuje tylko 4 bajty, dostep do elementow - kropka i strzalka;




float Q_rsqrt_u(float number){ 
    const float x2 = number * 0.5F;
    union { 
        float f; 
        uint32_t i;
    } conv = {number};

    conv.i = 0x5f3759df - (conv.i >> 1); 
    conv.f *= (1.5F - (x2 * conv.f * conv.f));
    return conv.f; 
}


int main (int argc, char **argv){
    float x = 4.0F;
    printf("1/(sqrt(%f) = %f, %f\n", x, 1.0F/sqrt(x), Q_rsqrt_u(x));
    //1/(sqrt(4.000000) = 0.500000, 0.499154

    return 0;
}
