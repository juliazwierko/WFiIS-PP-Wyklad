#include <stdio.h> 
#include <math.h>
#include <stdlib.h>
#include <string.h>

struct sPerson{
    int age;
    struct sPerson *nextInLine;
};


//function to make a new sPerson 
struct sPerson *getNewPerson(const int age)
{
    struct sPerson *newPerson = NULL;
    newPerson = malloc(sizeof(struct sPerson));
    if(newPerson != NULL)
    {
        newPerson->nextInLine = NULL;
        newPerson->age = age;
        printf("new person at %p\n", newPerson);  
    }
    else
    {
        printf("Allocation Failure!\n");
    }
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

void PrintList(const struct sPerson *list)
{
    printf("Printing List:\n");
    const struct sPerson *t;
    t = list;
    if(t == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        while(t)
        {
            printPerson(t, "t");
            t = t->nextInLine;
        }
    }
}

void CleanUp(struct sPerson *list)
{
    struct sPerson *next;
    while(list)
    {
        next = list->nextInLine;
        printf("Cleaning %d\n", list->age);
        free(list);
        list = next;
    }
}

int main(void){
    struct sPerson *first = NULL;
    struct sPerson *added = NULL; 
    
    char command[64];
    int age;

    while(1)
    {
        printf("Enter a command or value : ");
        fgets(command, 64, stdin);
        if (strcmp("q\n", command) == 0)
        {
            printf("Quitting..\n");
            break;
        }
        else if (strcmp("print\n", command) == 0)
        {
            printf("Printing..\n");
            PrintList(first);
        }
        else if(sscanf(command, "%d", &age) != 0)
        {
            printf("Adding %d\n", age);
            if(first == NULL)    
            {
                first = getNewPerson(age);
                if(first != NULL)
                {
                    added = first;
                }
            }
            else 
            {
                added->nextInLine = getNewPerson(age);
                if(added->nextInLine != NULL)
                {
                    added = added->nextInLine;
                }
            }
        }
    }
    CleanUp(first);
    first = NULL;
    added = NULL;
    return 0;
}
// Enter a command or value : 34
// Adding 34
// new person at 0x138e06770
// Enter a command or value : print
// Printing..
// Printing List:
// t: age:34 address: 0x138e06770 nextInLine:0x0
// Enter a command or value : 18      
// Adding 18
// new person at 0x138f04080
// Enter a command or value : 23
// Adding 23
// new person at 0x139804080
// Enter a command or value : print
// Printing..
// Printing List:
// t: age:34 address: 0x138e06770 nextInLine:0x138f04080
// t: age:18 address: 0x138f04080 nextInLine:0x139804080
// t: age:23 address: 0x139804080 nextInLine:0x0
// Enter a command or value : q
// Quitting..
// Cleaning 34
// Cleaning 18
// Cleaning 23
