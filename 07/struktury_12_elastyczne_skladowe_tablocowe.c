#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

struct mystring{ 
    int len;
    char str [];
};
//sizeof(struct mystring) = 4

int main (int argc, char **argv){
    int size = 21;

    struct mystring *ps = malloc(sizeof(struct mystring) * size*sizeof(char));
    ps->len = size;
    printf("\n&ps= %p\n", &ps); 
    printf("ps= %p\n", ps); 
    printf("&len= %p\n", &(ps->len)); 
    printf("&str= %p\n\n\n", &(ps->str));
//     &ps= 0x16d383350
//     ps= 0x121606790
//     &len= 0x121606790
//     &str= 0x121606794

    printf("sizeof(ps)= %ld\n", sizeof(ps));
    printf("sizeof(ps->len) = %ld\n", sizeof(ps->len));
    // sizeof(ps)= 8
    // sizeof(ps->len) = 4
    free(ps);

    strcpy(ps->str,"Niekompletny␣typ␣...");
//     Niekompletny␣typ␣...
    printf("\n%s\n", ps->str);
    return 0;
}
