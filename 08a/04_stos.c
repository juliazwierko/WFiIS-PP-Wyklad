//"A data element stack"
//top
// ->

//dsts
//next pointer 
// ->

//first dsts
//NULL

node *insert_item_begin(node *top, int val);
#define PUSH insert_item_begin

int pop (node ** top) {
    if (*top) {
      int x = (*top) -> value;
      node * tmp = *top;
      *top = (*top) -> next;
      free(tmp);
      return x;
    } else {
      printf(""Underflow Error - Stos pusty\n");
      return -1;
    }
}
             
//Operacja na stosie
  int main(void){
    node *top=NULL;
    top = PUSH(top, 8); 
    top = PUSH(top, 23); 
    top = PUSH(top, 123);
    
    print_list(top);
    
    printf("Pop()=%d\n", pop(&top));
    printf("Pop()=%d\n", pop(&top));
    
    top=PUSH(top, 12);
    
    top = delete_all(top);
    return 0;
  }

             
