#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main() {
    //MEMCMP()
    //Funkcja memcmp() kończy działanie po wykonaniu n porównań
    //niezależnie od znaku końca łańcucha.

    char s1[] = {'b', 'i', 'g','\0', 'c', 'a', 'r'};
    char s2[] = {'b', 'i', 'g','\0', 'c', 'a', 't'};
    if( memcmp(s1, s2, 3) == 0); //true
    if( memcmp(s1, s2, 4) == 0); //true
    if( memcmp(s1, s2, 7) == 0); //false

    //BARDZO WAZNE!!!
    if( strcmp(s1, s2) == 0); //true 
    if( strncmp(s1,s2, 3) == 0); //true
    if( strncmp(s1,s2, 4) == 0);
    if( strncmp(s1,s2, 7) == 0);

    return 0; 
}
