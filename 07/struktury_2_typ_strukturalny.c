#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//etykieta struktury to nazwa uzywana do indentyfikacji okreslonego
//rodzaju struktury
struct item {
    int id_number;
    char name[40];
    int on_shelf;
};  //nie zapomnija ";"


int main(void){
    //deklaracja zmiennych strukturalnych
    struct item it1, it2;
    struct item it3 = {528, "Hard drive", 100};
    it2 = it3; //ten sam typ;


    //szablon 
    /*
        struct etykieta {
            typ pole_struktury;
        };
    */
    return 0;
}
