#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    //1
    //  STRCPY()
    printf("STRCPY():\n");
    const char *src = "Take the test";
    puts(src);
    char dst[strlen(src)+1];
    puts(dst);
    strcpy (dst,src);
    puts(dst);

    dst[0] = 'M';
    puts(dst);
    printf("\n");

    printf("STRNCPY():\n");

    //2
    //  STRNCPY()
    char old[] = "hi";
    char new[6] = "abcdef"; //bez baku konca lancucha

    strncpy(new, old, 5);
    // zapisuje ’h’, ’i’, ’\0’, ’\0’, ’\0’ do dest

    printf("strncpy(dest,␣src,␣5):");
    for(size_t n = 0; n < sizeof new; ++n) {
        char c = new[n];
        c ? printf("'%c' ", c) : printf(" '\\0' ");
    }
    printf("\n");

    //3
    //  STRNCPY()
    char aniolek[] = "hi";
    char dest2[2];

    strncpy(dest2, aniolek, 2);
    //zapisuje ’h’, ’i’, to dest2
    for (size_t n = 0; n < sizeof dest2; ++n) {
        char c = dest2[n];
        c ? printf("'%c' ", c):printf("'\\0' ");
    }
    return 0;
}
