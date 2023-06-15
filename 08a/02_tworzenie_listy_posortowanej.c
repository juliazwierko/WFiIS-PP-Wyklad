// Dodaj nowy element do listy posortowanej:
// before wskazuje na element przed miejscem wstawienia.
// after wskazuje na element za miejscem wstawienia.
// Zaalokuj pamięć na nowy element.
// Uzupełnij pola danych nowego elementu.
// Zmodyfikuj zawartość before→next by wskazywał na nowy element.
// Zmodyfikuj zawartość next nowego elementu by wskazywał na after

#inlcude "lista.h"
//1
node *insert_item_sort(node *head, int key){ 
  node *elem = malloc(sizeof(node)); 
  if(!elem)
    return head; 
  elem->value=key; 
  elem ->next=NULL; 
  if(head){ 
    if(head->value > key){ 
      ...
    }else{
      ...
    } 
  }else
    head=elem; 
  return head;
}

//2
node *insert_item_sort(node *head, int key){ {...}
  if(head){
    if(head->value > key){
      elem ->next=head;
      head=elem; 
    }else{
      node *tp=head;
      for(;tp->next && tp->next->value < key;tp= tp->next);
      elem->next=tp->next;
      tp->next=elem; 
    }
   }else 
      head=elem;
    return head; 
}

//wywolanie funkcji tworzaca liste posortowana
int main(void){
  node *head = insert_item_sort(NULL, 6);
        head = insert_item_sort(head, 126);
        head = insert_item_sort(head, 26);
        head = insert_item_sort(head, 2);
        head = insert_item_sort(head, 16);
        head = delete_all(head);
  return 0;
}
}
