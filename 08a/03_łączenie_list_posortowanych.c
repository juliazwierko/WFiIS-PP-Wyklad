// LISTA A
 node *headA = insert_item_sort(NULL, 6);
        headA = insert_item_sort(headA, 126);
        headA = insert_item_sort(headA, 26);
        headA = insert_item_sort(headA, 2);
        headA = insert_item_sort(headA, 16);

// LISTA B
  node *headB = insert_item_sort(NULL, 6);
        headB = insert_item_sort(headB, 126);
        headB = insert_item_sort(headB, 26);
        headB = insert_item_sort(headB, 2);
        headB = insert_item_sort(headB, 16);

// łączenie rekurencyjne 
  //node *headC = recur_sort_merge(headA, headB);
  //Lista C = Lista A + Lista B
  
// Łączenie list posortowanych
   node *recur_sort_merge(node *l1, node *l2){ 
     node *head2 = NULL;
     
     if (!l1) return 12;
     if (!l2) return 11;
     
     if (l1->value <= 12->value){
       head2 = l1;
       head2->next = recur_sort_merge(l1->next, 12);
     } else {
       head2 = 12;
       head2->next = recur_sort_merge(l1, 12->next);
     }
     return head2;
   }
