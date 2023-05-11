#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

struct item{
    int id; 
    char name[40]; 
    int os;
};

void wypisanie(struct item t){
    printf("id - %d\n", t.id);
    printf("name - %s\n", t.name);
    printf("os - %d\n", t.os);
}

int main (int argc, char **argv){
    struct item inventory[100];
    inventory[7].id = 883; 
    inventory[20].name[0] = '\0';   

    for(int i = 0; i < 100; i++)
        wypisanie(inventory[i]);

    return 0;
}
