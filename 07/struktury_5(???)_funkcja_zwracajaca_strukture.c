#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void print_it(struct item t){
    printf("Item number: %d\n", t.id);
    printf("Item name: %s\n", t.name);
    printf("On shelf: %d\n\n", t.os);
}

struct item {
    int id; char name[40]; int os;
};  //deklaracja struktury


struct item build_it(int n, const char *name, int ns){
    struct item temp; //zmienna tymczasowa

    temp.id = n; //blok przypisan
    strcpy(temp.name, name);
    temp.os = ns;
    return temp;
}


int main(void){
    struct item it1 = build_it(914, "Printer cable", 57);
    //print_it(it1);
    return 0;
}
