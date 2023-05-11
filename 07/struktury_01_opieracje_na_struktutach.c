#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct jeden{
    int id;
    char name[40];
    int os;
}   item4,
    item5 = { .id = 528, .name = "Hard drive", .os = 100}; // standart C99

int main (int argc, char **argv){
    //WYPISANIE
    printf("Item5 id: %d\n", item5.id);
    printf("Item5 name: %s\n", item5.name);
    printf("Item quanity: %d\n", item5.os);
    printf("\n\n");

    //ZMIENIAMY DANE 
    item5.id = 100;
    strcpy(item5.name, "Aniołek");
    item5.os = 100;
    printf("Item5 id: %d\n", item5.id);
    puts(item5.name);
    printf("Item5 quanity: %d\n\n\n", item5.os);

    //PRZYPISANIE JEDNEJ STRUKTURY DO DRUGIEJ
    item4 = item5;
    printf("Item4 id: %d\n", item4.id);
    puts(item5.name);
    printf("Item4 quanity: %d\n\n\n", item4.os);

    //DEKLARACJA ZMIENNYCH STRUKTURALNYCH
    struct jeden item1, item2;
    struct jeden item3 = {18, "Julka", 18};
    item1 = item2 = item3;
    return 0;
}
// Item5 id: 528
// Item5 name: Hard drive
// Item quanity: 100


// Item5 id: 100
// Aniołek
// Item5 quanity: 100


// Item4 id: 100
// Aniołek
// Item4 quanity: 100
