#include <stdio.h>
#include <stdlib.h>

//WSTAW ELEMENT NA POCZATEK LISTY
//1. ZAALOKUJ PAMIEC NA NOWY ELEMENT.
//2. UZUPELNIJ POLA DANYCH NOWEGO ELEMENTU
//3. USTAW WSKAZNIK DO NASTEPNEGO !!!NEXT!!! DLA NOWEGO ELEMENTU NA PIERWSZY ELEMENT LISTY
//4. ZMIEN WSKAZNIK DO POCZATKU LISTY (HEAD), TAK BY WSKAZYWAL NA NOWY ELEMENT LISTY
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

int main(){
    //wywolanie funkcji
    node *head = insert_item_begin(NULL, 6);
          head = insert_item_begin(head, 16);
    return 0;
}
