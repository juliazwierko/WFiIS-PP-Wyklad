// void enqueue(node **top, int val);
// int dequeue(node **head);

//Operacja na kolejce
#include "lista.h"
#define ENQUEUE insert_item_end_scnd 
#define DEQUEUE pop

int main(void){
  node *root=NULL;
  root = ENQUEUE(root, 8); 
  root = ENQUEUE(root, 23); 
  root = ENQUEUE(root, 123); 
  root = ENQUEUE(root, 423);
  
  print_list(root);
  
  printf("Dequeue()=%d\n",DEQUEUE(&root));
  printf("Dequeue()=%d\n",DEQUEUE(&root));
  
  root = delete_all(root);
  return 0;
}
