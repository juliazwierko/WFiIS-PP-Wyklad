#include <string.h>
#include <stdlib.h>
#include <stdio.h>

struct {
    int id;
    char name[40]; 
    int os;
}   item1 = {.id = 528, .name = "Hard drive", .os = 100},
    item2 = {914, "Printer cable", 57};

struct tablica { int arr[5];} t1, t2;

int main(void){

    printf("Item id: %d\n", item1.id);
    printf("Item name: %s\n", item1.name);
    printf("Item quantity: %d\n\n", item1.os);
    //pola struktury sa l-wartosciami:
    item1.id = 767;
    item1.os++;
    //scanf("%d", &item1.id);
    printf("Item id1: %d\n", item1.id);
    printf("Item name1: %s\n", item1.name);
    printf("Item quantity1: %d\n\n", item1.os);

    item2 = item1;
    printf("Item id2: %d\n", item1.id);
    printf("Item name2: %s\n", item1.name);
    printf("Item quantity2: %d\n\n", item1.os);

    int a = 0;
    for(size_t i = 0; i < 5; i++){
        *(t1.arr+i) =  a++;
        printf("tab[i] - %zu\n", i,  (t1.arr +i));
    }
    printf("\n");
    t2 = t1;
    for(size_t i = 0; i < 5; i++){
        *(t2.arr+i) =  a++;
        printf("tab[i] - %zu\n", i,  (t1.arr +i));
    }
    return 0;
}
// Item id: 528
// Item name: Hard drive
// Item quantity: 100

// Item id1: 767
// Item name1: Hard drive
// Item quantity1: 101

// Item id2: 767
// Item name2: Hard drive
// Item quantity2: 101

// tab[i] - 0
// tab[i] - 1
// tab[i] - 2
// tab[i] - 3
// tab[i] - 4

// tab[i] - 0
// tab[i] - 1
// tab[i] - 2
// tab[i] - 3
// tab[i] - 4
