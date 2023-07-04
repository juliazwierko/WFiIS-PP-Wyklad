// Mamy dwie (trzymane przez wskazniki l1 oraz l2) posortowane rosnaco 
// listy jednokierunkowe, ktorych elementy przechowuja wartosci typu 
// float. Prosze zdefiniowac strukture struct el, oraz napisac i wywolac 
// funkcje, ktora polaczy te listy w jedna posortowana rosnaco liste 
// jednokierunkawa - rozwiazanie strcut el *L1, *L2;
#include <stdio.h>
#include <stdlib.h>

//a) Definicja struktury el
struct el {
    float value;
    struct el * next;
};

//b) Funkcja laczaca
struct el * merge(struct el *L1, struct el *L2){
    struct el *tmp;
    if(L2 == NULL)
    {
        return L1;
    }
    else if(L1 == NULL)
    {
        return L2;
    }
    else if(L1 == NULL && L1 == NULL)
    {
        return NULL;
    }
    //???
    //else if(L1 == value && L2 == value)
    // {
    //     L2->next = merge(L1, L2->next);
    //     return L2;
    // }
    else
    {
        L1 -> next = merge(L1->next, L2);
        return L1;
    }
}

int main(int argc, char *argv[]){

    return 0;
}
