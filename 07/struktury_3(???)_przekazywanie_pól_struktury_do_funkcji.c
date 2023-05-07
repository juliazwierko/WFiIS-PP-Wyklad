#include <string.h>
#include <stdlib.h>
#include <stdio.h>

struct item {
    int id_number;
    char name[40];
    int on_shelf;
};  

int is_on_shelf(int*);

int main(void){
    struct item it1, it2;
    struct item it3 = {528, "Hard drive", 100};
    it2 = it3;

    int qi = is_on_shelf(&item1.on_shelf);
    scanf(”%d”,&item1.on shelf);
    return 0;
}
