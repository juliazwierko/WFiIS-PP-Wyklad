#include "lista.h"

int main(void){
  node *head = insert_item_begin(NULL, 6);
        head = insert_item_begin(head, 6);
        head = insert_item_begin(head, 26);
  
               insert_item_end(&head, 126);
        head = insert_item_end_scnd(head, 226);
  return 0;  
}
