#include <stdlib.h>
#include <stdio.h>

int main(){
    //wskaznik do wskaznikow
    float x, *p, **q;
    p = &x;
    q = &p;
    // &q = 0x7ffe4958cf58 , 
    // &p = 0x7ffe4958cf60 ,
    // &x = 0x7ffe4958cf6c

    //&p = 0x7ffe4958cf60, q = 0x7ffe4958cf60

    //x = 10.01, *p = 10.01, **q = 10.01
    return 0;    
}
