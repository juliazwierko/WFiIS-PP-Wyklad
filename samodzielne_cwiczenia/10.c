#include <stdio.h>

struct data {char name[15];//przechowuje nazwe tablicy tt
             struct table tab;};

struct table {int len; //dlugosc tablicy tt
              double* tt; };

double sum( double *first, double *last); //funckja, ktora sumuje elementy tablicy typu float


int comp(const void* p1, const void* p2)
{
    struct data *d1 = (struct data *)p1;
    struct data *d2 = (struct data *)p2;

    double sum1 = sum(d1->tab.tt, d1->tab.tt + d1->tab.len);
    double sum2 = sum(d2->tab.tt, d2->tab.tt + d2->tab.len);

    return (int)(sum1-sum2);
}

int main(int argc, char *argv[]){
    //ilosc elementow TABLICA;
    int count = (argc - 1)/2;

    //utworzenie dynamicznie tablicy TABLICA struktur struct data
    struct data *TABLICA = malloc(sizeof(struct data)*count); 

    //wypelnienie pol name, len argumientami wywolania programu oraz 
    //utworzenie tablic tt 
    int c = 1;
    for(int i = 0; i < count; i++){
        strcpy((TABLICA + i).name, argv[c]);
        TABLICA.tab.len = atoi(argv[c+1]);
        TABLICA.tab.tt = malloc(sizeof(double) * TABLICA.tab.len);
        c++;
    }

    double var;
    scanf("%d", &var);
    //sorrtowanie tablicy TABLICA
    qsort(TABLICA,count, sizeof(struct data), comp);

    struct data *ptr;
    ptr = bsearch(&var,TABLICA,count, sizeof(struct data), comp);

    if (ptr == NULL)
        printf("Nie ma tablicy, ktorej suma = %f\n", var);
    else
        printf("%f to suma tablicy o nazwie %s\n", var, ptr->name);
    return 0;
}                                      
