#include <stdio.h> 
#include <math.h>
#include <stdlib.h>

struct sPerson{
    int age;
    //add an sPerson pointer to the sPerson structure
    struct sPerson *nextInLine;
};


//function to make a new sPerson 
struct sPerson *getNewPerson(const int age)
{
    struct sPerson *newPerson = NULL;
    newPerson = malloc(sizeof(struct sPerson));
    newPerson->nextInLine = NULL;
    newPerson->age = age;
    printf("new person at %p\n", newPerson); 
    return newPerson;
}

//print 
void printPerson(const struct sPerson *person, const char *comment)
{
    if (person == NULL)
    {
        printf("%s id NULL", comment);
    }
    else
    {
        printf("%s: age:%d address: %p nextInLine:%p\n", comment, person->age, person, person->nextInLine);
    }
    return;
}

int main(void){
    struct sPerson *first = NULL;
    struct sPerson *second = NULL;
    first = getNewPerson(18);
    second = getNewPerson(23);

    first->nextInLine = second;
    printPerson(first, "Julka");
    printPerson(second, "Pabłoś");

    //make a link
    printf("\n\n");
    first->nextInLine = second;
    printPerson(first, "Julka");
    printPerson(first->nextInLine, "first->nextInLIne");
    printPerson(second, "Pawel");
    // Julka: age:18 address: 0x11ee06770 nextInLine:0x11ee06780
    // first->nextInLIne: age:23 address: 0x11ee06780 nextInLine:0x0
    // Pawel: age:23 address: 0x11ee06780 nextInLine:0x0

    //zwolnienie pamieci
    free(first);
    free(second);
    first = NULL;
    second = NULL;
    return 0;
}
