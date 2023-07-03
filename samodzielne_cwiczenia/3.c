#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#define MAX(a,b) (a)>(b)?(a):(b)
#define DWA(x) 2*x

//kazdy z przykladow wywoluje osobno, aby nie zepsuc przypisan.
int main(int argc, char *argv[]){
    //1
    int x=3,y=4,m = MAX(x++, y++);
    printf("x = %d, y = %d, m = %d\n", x,y,m); 
    //x = 4, y = 6, m = 5

    //2
    int x=5, y=4, m=DWA(x+y);
    printf("x = %d, y = %d, m = %d\n", x,y,m);
    //x = 5, y = 4, m = 14
  
    //3
    int m = 4/DWA(2);
    printf("m = %d\n", m);
    //m = 4

    return 0;
}
