w C89 istnieje 5 predefiniowanych nazw makr:
__LINE__, __FILE__,
__DATE__ to łańcuch w postaci miesiąc/dzień/rok reprezentujący
         datę zamiany pliku źródłowego na obiektowy.
__TIME__ to łańcuch w postaci godzina/minuta/sekunda reprezentujący 
         czas kompilacji pliku źródłowego.
__STDC__ ma wartość 1, gdy kompilator jest zgodny ze standardem C.
-------------------------------------------------------------------
* Dyrektywa #line zamienia zawartość stałych __LINE__ oraz __FILE__,
  będących predefiniowanymi identyfikatorami kompilatora.
* __LINE__ zawiera numer aktualnie kompilowanego wiersza.
* __FILE__ to łańcuch reprezentujący nazwę aktualnie kompilowanego 
          pliku źródłowego.

* Ogólna postać dyrektywy #line: #line numer ”nazwapliku”
* numer to dowolna liczba całkowita, która staje się nową wartością
  __LINE__, nazwa pliku staje się nową wartoscią __FILE__.
* Przykład:
  #include <stdio.h>
  
  #line 100 //ustaw ;icznil wierszy
  int main(void){
    printf("%d\n",__LINE__); //wiersz 101
  return 0;
  }
-------------------------------------------------------------------
#define CHECK_ZERO(div) \
if (div == 0) \
printf("cos")
  
CHECK_ZERO(j);
int k = i/j;
