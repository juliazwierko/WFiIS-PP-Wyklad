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
  
  
    //WYPISYWANIE ARGUMENTOW W INNTY SPOSOB;
    //*p = true (NULL == 0);
    for(char **p = &argv[1]; *p; p++){
        printf("%s\n", *p);
    }
    // 12.3
    // 111
    // file1.txt
    
    printf("%d, %lf\n", atoi(argv[2]), atof(argv[1]));
    // 111, 12.300000

    return 0; 
}
