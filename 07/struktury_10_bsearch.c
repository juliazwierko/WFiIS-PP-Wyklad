#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

struct critter {const char *name, *species;};

struct critter muppets[] = {
{"Kermit", "frog"},
{"Piggy", "pig"},
{"Gonzo", "whatever"},
{"Fozzie", "bear"},
{"Sam", "eagle"},
{"Robin", "frog"},
{"Animal", "animal"},
{"Camilla", "chicken"}, 
{"Sweetums", "monster"}, 
{"Dr.␣Strangepork", "pig"}, 
{"Link␣Hogthrob", "pig"}, 
{"Zoot", "human"},
{"Dr.␣Bunsen␣Honeydew", "human"}, 
{"Beaker", "human"}, {"Swedish␣Chef", "human"} }; 

int crtr_cmp1(const void *c1, const void *c2){
    return strcmp (((struct critter *)c1)->name,((struct critter *)c2)->name);
}

int crtr_cmp2(const void *c1, const void *c2){
    return strcmp (((struct critter *)c1) -> species, ((struct critter *)c2)->species);
}

// void wypisanie(struct critter t){
//     printf("%s ", t.name);
//     printf("%s \n", t.species);
// }


int main (int argc, char **argv){
    int sc = sizeof (struct critter);
    int sm = sizeof (muppets)/sc;

    // for(int i = 0; i < 15; i++){
    //     wypisanie(muppets[i]);
    // }

     
  
    struct critter target = {"Kermit"};
    struct critter *result = bsearch (&target, muppets, sm, sc, crtr_cmp1);
    if(result)
        printf("muppets[%ld]␣=␣%s,␣the␣%s\n", result-muppets, result->name, result->species);
    else 
        printf("Couldn’t␣find␣%s.\n", target.name);

    qsort(muppets, sm, sc, crtr_cmp1);

    result = bsearch (&target, muppets, sm, sc, crtr_cmp1);

    return   0;
}

// Couldn’t␣find␣Kermit.
