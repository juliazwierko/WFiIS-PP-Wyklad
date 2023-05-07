#include <string.h>
#include <stdlib.h>
#include <stdio.h>

struct item {
    int id; char name[40]; int os;
};  //deklaracja struktury

void print_it(struct item t){
    printf("Item number: %d\n", t.id);
    printf("Item name: %s\n", t.name);
    printf("On shelf: %d\n\n", t.os);
} //definicja funkcji

int main(void){
    struct item it = {914, "Printer cable", 57};
    print_it(it);

    //WYWOLANIE STRUKTURY "W LOCIE"
    //!!!
    print_it((struct item) {914, "Prntr cbl", 57});    
    return 0;
}
// Item number: 914
// Item name: Printer cable
// On shelf: 57

// Item number: 914
// Item name: Prntr cbl
// On shelf: 57
