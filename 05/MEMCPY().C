#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main() {
    //memcpy()
//1
    char source[] = "lubie cynamonki";
    char dest[4];
    
    memcpy(dest, source, sizeof dest);
    for(size_t n = 0; n < sizeof dest; ++n)
        putchar(dest[n]);

    int siz = 3;
    int *p = malloc(siz * sizeof(int));

    printf("\n");
    if(p) {
        int arr[3] = {21, 236, 2136};
        memcpy(p, arr, siz*sizeof(int));
        for(size_t n = 0; n < siz; ++n)
            printf("p[%lu]=%d\n", n, p[n]);
        free(p);
        p = NULL;
    }

//2 BARDZO WAZNIE!
    char d[7], s[] = {'h','o', 't', '\0', 't', 'e', 'a'};
    memcpy(d,s,3);  //’h’,’o’,’t’ 
    memcpy(d,s,4);  //’h’,’o’,’t’,’\0’ 
    memcpy(d,s,7);  //’h’,’o’,’t’,’\0’,’t’,’e’,’a’

    strcpy(d,s);//’h’,’o’,’t’,’\0’

    strncpy(d,s,3);//’h’,’o’,’t’ 
    strncpy(d,s,4);//’h’,’o’,’t’,’\0’ 
    strncpy(d,s,7);//’h’,’o’,’t’,’\0’,’\0’,’\0’,’\0 ’
    return 0; 
}
