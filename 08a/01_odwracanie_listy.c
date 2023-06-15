node* rev_all(node *head) {
  node *cur = head; // aktualny 
  node *prev = NULL; // poprzedni node *next = NULL; // nastepny
  while(cur){
    next = cur->next;
    cur->next = prev = cur; cur = next;
  }
  return prev; }


//Wywolanie funkcji
int main(){
  head=rev_all(head);
  return 0;
}
