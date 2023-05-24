#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    //1
        double tab1[10];
        //Tablica dziesięciu double'i (liczb zmiennoprzecinkowych).
    
    //2
        double *tab2[10];
        //Tablica dziesięciu wskaźników do double'i.

    //3
        double (*ptr_tab3)[10];
        //Wskaźnik do tablicy dziesięciu double'i.
        //Typowe zastosowanie: wskaźnik do całego wiersza "zwykłej" tablicy dwuwymiarowej 
        //(tj. o automatycznym przydziale pamięci)
    
    //4
        double *(*ptr_tab4)[10];
        //Wskaźnik do tablicy dziesięciu wskaźników do double'i.

        // Sposób czytania:
        //          ptr_tab4 // Pod nazwą ptr_tab4 mamy:
        //         *ptr_tab4 // wskaźnik...
        //         (*ptr_tab4)[10] // do tablicy dziesięciu...
        //         *(*ptr_tab4)[10] // wskaźników...
        //         double *(*ptr_tab4)[10]; // do double'i.

    //5
        double **tab5[10];
        //Tablica dziesięciu wskaźników do wskaźników do double'i.
    return 0;
}
