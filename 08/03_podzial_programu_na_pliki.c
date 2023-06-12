//1
//main.c
#include "lista.h"
int main(void)
{
  node *head=i_i_b(NULL ,6);
        head=i_i_b(head ,16); head=i_i_b(head ,26);
return 0; 
}
//terninal:
gcc -c main.c -Wall

//2
//lista.c
#include "lista.h"
node *i_i_b(node *h, int n){ 
  ...
}
//terminal
gcc -c lista.c -Wall

//3
//lista.h
#ifndef LISTA_H 
#define LISTA_H

#include <stdio.h> 
#include <stdlib.h>

typedef struct tnode {
  int value;
  struct tnode *next;
} node;

node *i_i_b(node *, int); #endif

//Konsolidacja:
gcc -o lista.exe lista.o main.o
