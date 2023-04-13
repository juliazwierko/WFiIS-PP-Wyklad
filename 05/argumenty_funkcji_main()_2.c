#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    printf("Nawzwa programu: %s\n", *argv);

    //./a.out 12.3 111 file1.txt
    for(int i=1; i<argc; i++){
        printf("%s\n", argv[i]);
    }
    // 12.3
    // 111
    // file1.txt

    //*p = true (NULL == 0);
    for(char **p = &argv[1]; *p; p++){
        printf("%s\n", *p);
    }
    // 12.3
    // 111
    // file1.txt

    printf("\n");
    for(char **pa = argv; *pa; pa++){
            printf("%s\n", *pa);
    }

    printf("\n%c\n", argv[1][2]);
    printf("%s\n", *(argv+1));
    //. 
    //12.3
    return 0; 
}
