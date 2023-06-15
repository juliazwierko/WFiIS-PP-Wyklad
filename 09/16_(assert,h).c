void assert(int expr); 
- Jeśli expr ma wartość prawdy (jest różne od zera), makro nie robi nic. 
  W przeciwnym przypadku wyświetla: nazwę pliku, numer linii, funkcję, wyrażenie.
    
a.out: pass.c:11: main: Assertion ’z >= 0’ failed.
Następnie zostaje wywołana funkcja abort(). 
------------------------------------------------------------------------------------
  Przykład:
#include <assert.h>
...
  while(scanf(("%lf %lf",&x,&y)==2 && (x || y)){
    double z = x * x - y * y;
    assert(z >= 0); 
    printf("answer␣is␣%f\n", sqrt(z)); 
    puts("Next␣pair␣of␣numbers:␣");
  }
------------------------------------------------------------------------------------
 #include <stdio.h> 
 #include <assert.h>
        
 void print_number(int *myInt){
    assert (myInt);
    printf ("%d\n", *myInt);
 }
 int main (void){
    int a=10;
    int *b = &a, *c = NULL; 
    print_number (b); 
    print_number (c); 
    return 0;
}
       
//10
// a.out: pass_dwa.c:8: print_number: Assertiom 'myInt' failed. 
// Przerwane
------------------------------------------------------------------------------------
 *assert nieznacznie zwiększa czas działania programu.
        
 *Deaktywacja assert:
    #define NDEBUG
    #include <assert.h>
    ...
    while(...){assert(z >= 0);}
        
 *Nie należy umieszczać wewnątrz makra assert wywołań funkcji ani żadnych wyrażeń, 
  które mają efekty uboczne.
     #define NDEBUG
     #include <assert.h>
     ...
     assert(p = malloc(n) != NULL); // malloc nie zostanie wywolany
------------------------------------------------------------------------------------
  #include <stdio.h>
  #define NDEBUG
  #include <assert.h>
        
  void print_number(int *myInt){
    assert (myInt);
    printf ("%d\n", *myInt); 
  }
  int main (void){
    int a=10;
    int *b = &a, *c = NULL; 
    print_number (b); 
    print_number (c); 
    return 0;
  }     
//OutPut:
// 10
// NAruszneie ochrony pamieci
------------------------------------------------------------------------------------
