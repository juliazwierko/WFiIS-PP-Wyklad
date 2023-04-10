#include <stdlib.h>
#include <stdio.h>
//typ *p = malloc(n * sizeof(typ));
//typ *p = calloc(p, n * sizeof(typ));
//...
//free(p);
//p = NULL;

// realloc(NULL, size) jest równoważne malloc(size). 
// realloc(tab, 0) jest równoważne free(tab).

void safefree(void **pp){ 
    free(*pp);
    *pp = NULL;
}
int main(){
    int *p = malloc(4 * sizeof(int));
    
    safefree((void **)p);   // !!!
    return 0;    
}
