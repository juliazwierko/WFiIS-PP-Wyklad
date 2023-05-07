#include <string.h>
#include <stdlib.h>
#include <stdio.h>

struct {
    int id;
    char name[40]; 
    int os;
}   item1 = {.id = 528, .name = "Hard drive", .os = 100},
    item2 = {914, "Printer cable", 57};


int main(void){

    printf("Item id: %d\n", item1.id);
    printf("Item name: %s\n", item1.name);
    printf("Item quantity: %d\n\n", item1.os);
    //pola struktury sa l-wartosciami:
    item1.id = 767;
    item1.os++;
    scanf("%d", &item1.id);
    printf("Item id: %d\n", item1.id);
    printf("Item name: %s\n", item1.name);
    printf("Item quantity: %d", item1.os);
    return 0;
}
// Item id: 528
// Item name: Hard drive
// Item quantity: 100

// 12
// Item id: 12
// Item name: Hard drive
// Item quantity: 101
