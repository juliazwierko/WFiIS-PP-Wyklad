#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

typedef struct tnode {
    int dane;
    struct tnode *next; //organizaja naszej listy

}node;
/*
    To do:
    1.Dodawanie elementow do listy
    2.Wyswietlenie aktualnej listy
*/

//1 - Dodawanie na koniec listy
void add(int a, node *head){
    node *pointer = head;
    node *new_element = malloc(sizeof(node));
    new_element->dane = a;
    new_element->next = NULL;

    int i = 2;
    while(pointer->next != NULL){
        pointer = pointer->next;
        i++;
    }

    pointer->next = new_element;

    
    printf("Zosatl dodany nowy element #%d\n", i);
}

//2 - wypisanie
void print(node *head){
    node *t = head;
    if(t == NULL){
        printf("lista jest pusta\n");
        return;
    }

    while(t->next != NULL){
        printf("%d\n", t->dane);
        t = t->next;
    }
    printf("%d\n", t->dane);
}

//3 - zwolnienie pamieci 
void safefree(node **head){
    node *pointer = *head;
    node *tmp = *head;

    while(pointer->next != NULL)
    {   
        tmp = pointer->next;
        free(pointer);
        pointer = tmp;
    }
    free(pointer);
    *head = NULL;
}

int main(void){
    node *head = malloc(sizeof(node));
    head->dane = 18;
    head->next = NULL;

    add(23, head);
    add(23, head);
    add(21, head);

    printf("\n");

    print(head);

    safefree(&head);

    printf("Po safefree:\n");
    print(head);
    return 0;
}
// Zosatl dodany nowy element #2
// Zosatl dodany nowy element #3
// Zosatl dodany nowy element #4

// 18
// 23
// 23
// 21
// Po safefree:
// lista jest pusta
