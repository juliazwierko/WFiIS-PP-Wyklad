#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

    char planets[][8] = {"mercury", "yoo", "maczek"};
    puts(*planets+8);
    printf("%lu\n", strlen(*planets+8));
    /*
        yoo
        3
    */

    char *planet[] = {"Mercury", "yoo", "maczek"};
    puts(*planet);
    printf("%lu\n", strlen(*planet));
    /*
        Mercury
        7
    */
    return 0; 
}
