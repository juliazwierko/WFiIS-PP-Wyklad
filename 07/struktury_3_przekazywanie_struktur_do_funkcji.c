#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Pablo{
    int wiek;
    int miesiac_urodzin;
    char buzka_w_lebik_od_Julki[40];
};  //struktura

void wypisanie(struct Pablo t){
    printf("wiek - %d\n", t.wiek);
    printf("miesiac urodzin - %d\n", t.miesiac_urodzin);
    printf("buzka w czolko od twoje Julki ;3: %s\n\n", t.buzka_w_lebik_od_Julki);
}

int main (int argc, char **argv){
    struct Pablo pawcia = {23, 3, "cmok-cmok-cmok ^_^"};
    wypisanie(pawcia);

    //standart C99 - tworzenie struktury "w locie
    wypisanie((struct Pablo) {24, 3, "aaaaaa cmokkkkkkkkk"});
    return 0;
}
// wiek - 23
// miesiac urodzin - 3
// buzka w czolko od twoje Julki ;3: cmok-cmok-cmok ^_^

// wiek - 24
// miesiac urodzin - 3
// buzka w czolko od twoje Julki ;3: aaaaaa cmokkkkkkkkk
