#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct item{
    int id; char name[40]; int os;
}; 

struct item build_it(int n, const char *name, int t){
    struct item temp;

    temp.id = n;
    strcpy(temp.name, name);
    temp.os = t;

    return temp;
}

int main (int argc, char **argv){
    struct item it1 = build_it(100, "Siema", 12);
    printf("%d\n", it1.id);
    printf("%s\n", it1.name);
    printf("%d\n", it1.os);
    return 0;
}
// 100
// Siema
// 12
