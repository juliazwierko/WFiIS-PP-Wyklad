//Co wypisze kompilator?
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

struct {unsigned int var_1;
        unsigned int var_2;} status1;

struct {unsigned int var_1 : 2;
        unsigned int       : 4;
        unsigned int var_2 : 3;} status2;

int main(int argc, char *argv[]){
    printf( "size status1 : %lu \n", sizeof(status1));
    printf( "size status2 : %lu \n", sizeof(status2));

    status2.var_1 = 5;
    status2.var_2 = 5;
    printf( "status.var_1 = %u, status2.var_2 = %u \n", status2.var_1, status2.var_2);

    return 0;
}
// size status1 : 8 
// size status2 : 4 
// status.var_1 = 1, status2.var_2 = 5 
