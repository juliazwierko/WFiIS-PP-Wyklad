#include <stdio.h>
#include <stdlib.h>

//Deklaracja struktury
typedef struct tnode{
    int value;
    struct tnode *next;
} node;


int main(){
    //alokacja pamieci na jeden element
    node *tmp = malloc(sizeof(node));
    if(!tmp){
        printf("Blad alokacji pamieci\n");
        return 0;
    }

    return 0;
}
