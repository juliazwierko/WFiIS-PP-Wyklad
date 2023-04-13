#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {
    //  stdlib.h: rand()
    //  zwraca pseudolosową liczbę całkowitą z zakresu między 0 
    //  a RAND MAX, gdzie RAND MAX jest nie mniejszy niż 32767.

    //  void srand(unsigned int seed) 
    //  - generator liczb pseudolosowych jest inicjowany za pomocą seed.
    srand((unsigned)time(NULL));

    int abc = rand() % 100; //  0 - 99;
    printf("%d\n", abc);

    int def = 1 + rand() % 100; //  1 - 100
    printf("%d\n", def);

    int a,b;
    scanf("%d %d", &a, &b);
    int ghi = a + rand() % (b-a+1); // a - b;
    printf("%d\n", ghi);
    int jkl = rand() % 2; // 0 - 1
    printf("%d\n", jkl);

    float mno = (float)rand()/RAND_MAX; // 0 - 1 
    printf("%f\n", mno);

    return 0; 
}
