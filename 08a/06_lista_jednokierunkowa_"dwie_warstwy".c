//Deklaracja elementu listy - alokacja danych dla data niezależna od 
//alokacji elementu listy typu node:
typedef struct tnode { void *data;
  struct tnode *next;
} node;

typedef struct tlist { 
  node *head;
  node *tail;
  
  int elm_nmb;
  
  int (*sllCmpr)(const void *a, const void *b);
  void (*sllDlt)(void *data); 
} slList;
