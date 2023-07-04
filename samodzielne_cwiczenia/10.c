/*
W programie mamy zdefiniowane struktury:
------------------------------------------
struct table{
    int len; //dlugsc tablicy tt 
    double* tt;
};
struct data{
    char name[15];//przechowuje nazwe
    struct table tab;
};
------------------------------------------

oraz funkcje, ktora sumuje elementy tablicy typu float.:
double sum( double *first, double *last);

Prosze uzupelnic program, dopisac wszystkie brakujace 
instrukcje oraz funkcje
------------------------------------------------------------------------------------
*Program ma byc wywolywany z lista parametrow zewierajaca pewna ilosc par:
    nazwa liczba_calkowita, ktore okreslaja nazwe oraz dlugosc tablicy tt.
------------------------------------------------------------------------------------
*Przyklad wywolania 

    Program TAB 19 TAB1 6 TAB2 11 TAB3 2
------------------------------------------------------------------------------------
*Program ma utworzyc dynamiczne tablice 'TABLICA' struktur 'struct data', wypelnic ja 
danymi z listy wywolania programu(pola name oraz len). Nie wypelniamy wartosciami tablic 'tt'.
------------------------------------------------------------------------------------
*Wykorzystujac funkcje 'qsort' oraz 'bsearch' nalezy wypisac 'nazwe tablicy', ktorej suma jest 
rowna wczytanej wartosci.
*/

#include <stdio.h>

struct data {char name[15];//przechowuje nazwe tablicy tt
             struct table tab;};

struct table {int len; //dlugosc tablicy tt
              double* tt; };

double sum( double *first, double *last); //funckja, ktora sumuje elementy tablicy typu float

//???
int comp1(struct data *p1, struct data *p2)
}
int main(int argc, char *argv[]){
    //ilosc elementow TABLICA;
    int count; // = ________;

    //utworzenie dynamicznie tablicy TABLICA struktur struct data
    //_______

    //wypelnienie pol name, len argumientami wywolania programu oraz 
    //utworzenie tablic tt 
    for(int i = 0; i < count; i++){
        struct data new;
        strcpy(new.name, argv[i+i*2]);
        new.tab.len = argv[2+i*2];
        double ttab[new.tab.len];
    }
    //sorrtowanie tablicy TABLICA
    //qsort(TABLICA, sizeof(char)*16 + sizeof(struct table), count, comp1);


    //zmienna przechowujaca szukana sume 
    double var;
    scanf("%d", &var);
    //wyszukanie tablicy, ktora ma odpowiednia sume
    //struct data *ptr = bsearch(&TABLICA, sizeof(char)*16+sizeof(struct data), comp1);

    //?
    double sum1 = sum(p1->table.tt, p1->table.len);
    double sum2 = sum(p2->table.tt, p2->table.tt+ + p2 -> table.tt)
    if (ptr == NULL)
        printf("Nie ma tablicy, ktorej suma = %f \n", var);
    else
        printf("%f to suma tablicy o nazwie %s\n", var, ptr->name);
    return 0;
}                                      
