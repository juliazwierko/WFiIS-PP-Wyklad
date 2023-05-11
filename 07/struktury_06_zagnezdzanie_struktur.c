#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//naglowek!!!
#include <stddef.h>

struct person_name{
    char first[20+1];
    char last[20+1];
};

struct student{ 
    struct person_name name;
    int id, age;
} s1, s2;

int main (int argc, char **argv){
    strcpy(s1.name.first, "Julia");  
    strcpy(s1.name.last, "Zviarko");
    s1.id = 123456789;
    s1.age = 18;  

    printf("%s", s1.name.first);
    //Julia, i tak dalej;
    return 0;
}
