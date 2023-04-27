#include <stdio.h>
#include <stdarg.h>

float sum_series(int num, ...){
    float sum = 0.0;
    //deklaracja wskaznika do listy argumentow va_list argptr;
    // inicjacja agrptr
    va_start(argptr , num);
        for(;num;num--){
            //odczytujemy kolejne wartosci 
            sum += va_arg(argptr , float);
        }

    //zamkniecie odczytu argumentow
    va_end(argptr);

    return sum; 
}

int main(){
    // < stdarg.h >

    //void f1 (int n, ...); // poprawny
    //void f2 (int n, const char *s, ...); // poprawny 
    //void f3 (
        

    printf("\n");
    return 0;
}
