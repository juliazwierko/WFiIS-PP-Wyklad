#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(){
    printf("strlen('abc') - %lu\n", strlen("abc"));
    printf("strlen('') - %lu\n", strlen(""));
    char s[] = "abcdef";

    printf("%lu\n", strlen(s));
    s[2] = '\0';
    printf("%lu\n", strlen(s));
    printf("%lu\n", sizeof s);

    return 0;
}

// strlen('abc') - 3
// strlen('') - 0
// 6
// 2
// 7
