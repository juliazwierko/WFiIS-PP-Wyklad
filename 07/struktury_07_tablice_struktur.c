#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

//1
struct item{
    int id; 
    char name[40]; 
    int os;
};

//2
struct critter{
    const char *name;
    const char *species;
};

void wypisanie(struct item t){
    printf("id - %d\n", t.id);
    printf("name - %s\n", t.name);
    printf("os - %d\n", t.os);
}

int main (int argc, char **argv){
    //1
    struct item inventory[100];
    inventory[7].id = 883; 
    inventory[20].name[0] = '\0';  
    for(int i = 0; i < 100; i++)
        wypisanie(inventory[i]);
    
    struct critter muppets[] = { {"Kermit", "frog" }, {"Piggy", "pig"} };
    //wewnetrzne nawiasy klamrowe sa opcjonalne
    
    return 0;
}
