#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void compare(const char *l , const char *r , int s){

    int rc = strncmp(l, r, s);
    if(rc == 0) 
        printf("First %d chars of [%s] equal [%s]\n",s,l ,r);
    else if(rc < 0) 
        printf("First %d chars of [%s] precede [%s]\n",s,l ,r);
    else if(rc > 0) 
        printf("First %d chars of [%s] follow [%s]\n",s,l ,r);
    }

int main() {
    //STRCMP 
    /*
    Возвращаемое значение:
    0 – если сравниваемее строки идентичны.

    Положительное число – если строки отличаются и код первого отличающегося символа в строке str1 больше кода символа на той же позиции в строке str2.

    Отрицательное число – если строки отличаются и код первого отличающегося символа в строке str1 меньше кода символа на той же позиции в строке str2.
    */

    strcmp("A", "A"); // 0
    strcmp("A", "B"); //-1
    strcmp("B", "A"); // 1
    strcmp("C", "A"); // 1
    strcmp("Z", "a"); //-1
    //W kodzie ASCII ’Z ’(90) poprzedza ’a ’(97).


    strcmp("apples", "apple"); // 1 
    strcmp("apples", "applet"); // -1


    //SRTNCMP -> int strncmp(const char ∗s1,const char ∗s2,size t count);
    const char *str = "Hello␣World!";
    compare(str, "Hello!", 5); 
    compare(str, "Hello", 10); 
    compare(str, "Hello there", 10); 
    //compare("Hello , everybody!" + 12, "Hello somebody!", + 11, 5);

//*
    char a[] = "pawel";
    char b[] = "pawcia";
    int al = strncmp(a,b,3);
    printf("%d", al); //0 

    return 0;
}
