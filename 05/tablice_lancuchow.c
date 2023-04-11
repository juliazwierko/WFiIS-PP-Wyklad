#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define SIZ 4

int main() {
    //Tablice lsncichow
    //1
    char planets[][8] = {"Mercury", "Venus", " Earth", "Mars", "Jupiter", "Saturn", " Uranus", "Neptune"};

    puts(planets[0]);
    printf("%lu\n", strlen(planets[1]));

    //2
    char *planets_2[] = {"Mercury", "Venus", "Earth ", "Mars", "Jupiter", "Saturn", "Uranus", " Neptune"};
    puts(planets_2[0]);
    printf("%lu\n", strlen(planets_2[1]));
 
    return 0; 
}
