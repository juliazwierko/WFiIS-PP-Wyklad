hello: hw_hello.o hw_power.o hw_main.o
       gcc hw_hello.o hw_power.o hw_main.o -o hello -lm

hw_main.o: hw_defs.h hw_hello.h hw_power.h 
           gcc -c -Wall hw_main.c 

hw_hello.o: hw_hello.c hw_defs.h
            gcc -c -Wall hw_hello.c 

hw_power.o: hw_power.c hw_defs.h 
            gcc -c -Wall hw_power.c -lm

