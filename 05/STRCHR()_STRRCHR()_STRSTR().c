#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main() {
    //WYSZUKIWANIE 

// STRCHR
    //  const char *strchr(const char *str, int c);
    //zwraca wskaźnik do pierwszego wystąpienia znaku c w łańcuchu str.

    char str[] = "Ala ma kota i mamuta";
    char *a = strchr(str, 'a');
    printf("%p, %p\n", &str[2], a); // taki samy adres;

//STRRCHR
    //  const char *strrchr(const char *str, int c);
    //zwraca wskaźnik do ostatniego wystąpienia znaku c w łańcuchu str.
    char *b = strrchr(str, 'a');
    printf("%p, %p\n", &str[19], b); 

//STRSTR
    //  const char *strstr(const char *s1, const char*s2);
    //zwraca wskaźnik do pierwszego wystąpienia s2 w s1 lub wskaźnik zerowy, jeśli s2 nie jest częścią s1.
    char *c = strstr(str, "kota");
    puts(c);


    //WYKLAD (code)
    /*
    char str[] = "This␣is␣a␣simple␣string."; char *pch = strchr(str, ’s’);
    while(pch){
        printf ("\’s\’->␣%ld,", pch-str+1); 
        pch = strchr(pch+1, ’s’);
        }
        pch = strstr(str, "simple"); 
        strncpy(pch, "sample", 6); 
        printf("str:␣%s\n", str);
        //’s’ → 4, ’s’ → 7, ’s’ → 11, ’s’ → 18 str: This is a sample string. 
    */
    return 0; 
}
