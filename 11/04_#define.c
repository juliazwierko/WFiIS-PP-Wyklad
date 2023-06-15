*Dyrektywa #define definiuje ciąg znaków, który zostanie podstawiony w każdym 
miejscu wystąpienia identyfikatora w pliku źródłowym

*Ogólna postać dyrektywy: #define nazwa-makra ciąg-znaków

*Przykład:
#include <stdlib.h>
#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define MAX_TAB 1234
#define ERR_MSG "I/O error\n"


int main(void){
  int tab[MAX_TAB]; 
  char x = TRUE;
  char y = FALSE;
  
  printf(ERR_MSG); 
  return 0;
}

//I/O error

