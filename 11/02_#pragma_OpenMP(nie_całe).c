#pragma 
to dyrektywa zależna od implementacji, pozwalająca przekazywać kompilatorowi różne 
instrukcje.

OpenMP (ang. Open Multi-Processing)- wieloplatformowy interfejs programowania 
        aplikacji (API) umożliwiający tworzenie programów komputerowych dla systemów 
        wieloprocesorowych z pamięcią dzieloną. Może być wykorzystywany w językach 
        programowania C, C++ i Fortran na wielu architekturach, m.in. Unix i Microsoft 
        Windows. Składa się ze zbioru dyrektyw kompilatora, bibliotek oraz zmiennych 
        środowiskowych mających wpływ na sposób wykonywania się programu.

#include <omp.h> 
#include <stdio.h>
  int main(void){
  #pragma omp parallel
  {
    int ID = omp_get_thread_num(); 
    printf("hello(%d)␣", ID); 
    printf("world(%d)\n", ID);
  }
return 0;
}

//Polecenie kompilacji: gcc first.c -fopenmp
//wynik dzialania 
hello(0) world(0)
hello(6) world(6)
hello(5) world(5)
hello(3) world(3)
hello(2) world(2)
hello(1) world(1)
hello(7) world(7)
hello(4) world(4)
//wynik dzialania
hello(0) hello(1) hello(3) world(1)
hello(2) world(2)
world(3)
hello(7) world(7)
hello(4) world(4)
woeld(0)
hello(5) world(5)
hello(6) world(6)
------------------------------------------------------------------------------------
#include <omp.h> 
#include <stdio.h> 
#include <stdlib.h>
  
#define SIZE 16
  
int main(void){
  int a[SIZE], b[SIZE], c[SIZE];
  
  for(int i=0; i<SIZE; i++){ 
    a[i] = rand()%21;
    b[i] = 50 + rand()%101;
} 
  
...
------------------------------------------------------------------------------------

  
