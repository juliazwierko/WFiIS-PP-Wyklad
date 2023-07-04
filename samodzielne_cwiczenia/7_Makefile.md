Mamy plik Makefile 

<...>

na dysku w katalogu roboczym zapisane mamy pliki:
     hw_defs.h hw_hello.h hw_power.h 
     hw_hello.c hw_power.c hw_main.c 

1) Jakie pliki sie pojawia po wykonaniu polecenia make 
2) Jaki bedzie efekt wykonania nastepujacej sekwencji komend:
        touch hw_defs.h 
        make

Odpowiedz:
#1
  Po wykonaniu polecenia make w wyniku pojawią się następujące pliki:
  
  hello: plik wykonywalny, który będzie nazywany "hello".
  hw_hello.o: plik obiektowy zawierający skompilowany kod z pliku "hw_hello.c".
  hw_power.o: plik obiektowy zawierający skompilowany kod z pliku "hw_power.c".
  hw_main.o: plik obiektowy zawierający skompilowany kod z pliku "hw_main.c".

#2
  touch hw_defs.h: 
      Polecenie "touch" tworzy plik o nazwie "hw_defs.h" (jeśli nie istnieje) 
      lub aktualizuje jego datę modyfikacji do bieżącego czasu.
  make: 
      Polecenie "make" wykonuje plik Makefile i wykonuje odpowiednie reguły 
      kompilacji w celu zbudowania pliku wykonywalnego "hello" oraz plików 
      obiektowych hw_hello.o, hw_power.o i hw_main.o. Ponieważ polecenie 
      "touch" nie dotyczy żadnego z plików zależności, żadne z nich nie 
      zostanie ponownie skompilowane. Ostatecznie zostanie zbudowany plik
      wykonywalny "hello" i pliki obiektowe hw_hello.o, hw_power.o oraz 
      hw_main.o. 
      
Podsumowując, po wykonaniu polecenia make pojawią się plik wykonywalny "hello" 
oraz pliki obiektowe hw_hello.o, hw_power.o i hw_main.o.
