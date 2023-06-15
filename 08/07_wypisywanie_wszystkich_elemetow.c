//Wywołanie funkcji, która kasuje listę:
#include "lista.h"

int main(void){ 
  node *head = insert_item_begin(NULL, 6);
        head = insert_item_begin(head, 16);
        head = insert_item_begin(head, 26); 
               print_list(head);
               insert_item_end(&head, 126);
        head = insert_item_end_scnd(head, 226);
               print_list(head);
        head = delete_all(head);
  return 0;
}
