#include "lista.h"
node* rev_all(node *head) {
  node *cur = head; // aktualny 
  node *prev = NULL; // poprzedni node *next = NULL; // nastepny
  while(cur){
    next = cur->next;
    cur->next = prev = cur; cur = next;
  }
  return prev; }

//Wywolanie funkcji:
// int main(){
//   head=rev_all(head);
//   return 0;
// }

int main(void){
  node *head = insert_item_begin(NULL, 6);
        head = insert_item_begin(head, 16);
        head = insert_item_begin(head, 26);
               insert_item_end(&head, 126);
        head = insert_item_end_scnd(head, 226); //Przed
        head = rev_all(head);
        head = delete_all(head);
  return 0;
}

