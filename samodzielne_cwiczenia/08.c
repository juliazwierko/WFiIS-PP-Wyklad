/*
  Zadanie
  Prosze napisac fragmenty programu, ktory pozwola zainicjowac i 
  wypisac nastepujace zmienne 
  
  klasa.numer;
  (klasa.nauczyciel+4)->nazwisko;
  klasa.uczen[1].nazwisko;
  klasa.uczen[3].imie[2]
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct uczen_ {
    char imie[20];
    char nazwisko[20];
};

struct nauczyciel_ {
    char imie[20];
    char nazwisko[20];
};

struct klasa {
    int numer;
    struct uczen_ uczen[25];
    struct nauczyciel_ *nauczyciel;
};

int main(int argc, char *argv[]) {
    struct klasa mojaKlasa; // Deklaracja zmiennej klasa
    mojaKlasa.numer = 4;
     
    struct nauczyciel_ moj_nauczyciel;
    (mojaKlasa.nauczyciel) = &moj_nauczyciel;

    strcpy((mojaKlasa.nauczyciel + 4)->nazwisko, "Szybko");
    strcpy(mojaKlasa.uczen[1].nazwisko, "Zviarko");
    mojaKlasa.uczen[3].imie[2] = 'J';

    printf("mojaKlasa.numer: %d\n", mojaKlasa.numer);
    printf("(mojaKlasa.nauczyciel + 4)->nazwisko: %s\n", (mojaKlasa.nauczyciel + 4)->nazwisko);
    printf("mojaKlasa.uczen[1].nazwisko: %s\n", mojaKlasa.uczen[1].nazwisko);
    printf("mojaKlasa.uczen[3].imie[2]: %c\n", mojaKlasa.uczen[3].imie[2]);

    return 0;
}
