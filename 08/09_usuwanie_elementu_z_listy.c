#include <stdio.h>
#include <stdlib.h>

typedef struct tnode{
    int value;
    struct tnode *next;
} node;

//DEFINICJA FUNKCJI
node *insert_item_begin(node *head, int val){
    node *temp = malloc(sizeof(node));
    if(!temp){
        printf("Brak pamieci\n");
        return head;
    }
    temp -> value = val;
    temp -> next = head;
    return temp;
}

//2
node *insert_item_end_scnd(node *head, int val){ node *temp = malloc(sizeof(node));
    if (!temp) 
        return head;
    temp->value = val; 
    temp ->next = NULL;
    if (head)
    {
    node *ele = head; while(ele->next)
    ele=ele->next;
    ele->next=temp; 
    } 
    else
        head = temp; 
    return head;
}

//WYPISYWANIE WSZYSTKICH ELEMENTOW
    void print_list (const node *elem){
        if(!elem){
            printf("lista jest pusta");
            return;
        }
    

    for( ; elem; elem=elem->next)
        printf("[%p] = %d-> %p, ", elem, elem->value,elem->next);
}

//usuwanie wszystkich elementow
node *delete_all(node *elem){ 
    while(elem){
    node *next = elem -> next; printf("Usuwam element %p.\n", elem); free(elem);
    elem = next; 
    }
    return NULL; 
}

node *search_f(node *elem, int key){
    for(; elem && elem->value != key; elem = elem->next); 
    return elem;
}

node *search_w(node *elem, int key){ 
    while(elem && elem->value != key)
        elem = elem ->next; 
    return elem;
}

//Usuwanie elementu z listy
node *del_nod(node *head, int key){
    node *cur = head, *prev = NULL;
    for(;cur && cur->value != key; prev = cur, cur = cur->next);

    if(!cur)
        return head; //key was not found
    if(!prev)
        head = head->next; //kwy was head
    else
        prev->next = cur->next;
    free(cur);
    return head;
}

int main(){
    //wywolanie funkcji
    node *head = insert_item_begin(NULL, 6);
          head = insert_item_begin(head, 16);

    //wywolanie funkcji dla wypisywania 
    print_list(head);
    printf("\n");

    //wywolanie funkcji dla usuwania wszystkich elementow
    head = delete_all(head);

    //wywolanie funkcji usuwania ELEMENTU z listy
    int key = 12;
    head = del_nod(head, key); //na wykladzie podano "head=del_nod(head, key);"

    printf("\n");
    return 0;
}
