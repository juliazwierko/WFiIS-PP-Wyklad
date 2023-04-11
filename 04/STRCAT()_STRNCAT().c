#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(){
    //STRCAT
    //strcat dołącza kopię łańcucha src na koniec łańcucha dest.
    
    char str[50] = "Hello ";
    char str2[50] = "World!"; 
    strcat(str, str2);
    strcat(str, " ..."); 
    strcat(str, " Goodbye World!"); 
    puts(str);
    //  Hello World! ... Goodbye World!


    //STRNCAT
    char str3[50] = "Hello "; 
    char str4[50] = "World!"; 
    strcat(str3, str4);
    strncat(str3, " Goodbye World!", 3); 
    puts(str3);
    //Hello World! Go
    return 0;
}
