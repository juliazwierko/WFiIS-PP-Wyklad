#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char input[] = "Ja lubie lody, ogladanie seriali i przytulac swoja cynamonke ^_^";
    puts(input);

    char *osobne_slowa = strtok(input, " ,");

    while(osobne_slowa) {
        puts(osobne_slowa);
        osobne_slowa = strtok(NULL, " ,");
    }

    return 0;
}
// Ja lubie lody, ogladanie seriali i przytulac swoja cynamonke ^_^
// Ja
// lubie
// lody
// ogladanie
// seriali
// i
// przytulac
// swoja
// cynamonke
// ^_^
