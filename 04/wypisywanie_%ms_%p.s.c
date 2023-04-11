#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define TXT "tekst"

char znak(int i){
    return "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[i];
    //Operator nawiasowy pozwala wybrać pojedynczy znak ze stałej znakowej.
}

int main(){
//1
    printf("%c\n", znak(3)); //D


//2
    char string[] = TXT;
    const char *pst = TXT;
    // "tekst", TXT        : A: 0x5567ddc7c86f, 0x5567ddc7c86f - adres stałej
    // str, &str[0], &str) : B: 0x7ffe0c72470c, 0x7ffe0c72470c, 0x7ffe0c72470c - adres tablicy
    // pst, &pst[0], &pst  : C: 0x5567ddc7c86f, 0x5567ddc7c86f, 0x7ffe0c724700 - adres wskaźnika


//3 
    // %.ps
    printf("%.3s\n", string); //tekst -> tek
    printf("%.20s\n", string);//tekst

    // %ms - - określa rozmiar pola do wyświetlenia.
    //Łańcuch dłuższy niż m zostanie wypisany w całości.
    char str[] = "Writing a string is easy";
    printf ("A:%60s\n", str);    // A:Writing a string is easy
    printf ("B:%.5s\n", str);   // B:Writi
    printf ("C:%6.3s\n", str);  // C:   Wri
    printf ("D:%-6.3s\n", str); // D:Wri   

    double a = 6.58273;
    printf("%3lf", a);

    printf("\n");
    return 0;    
}
