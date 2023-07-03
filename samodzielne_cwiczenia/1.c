/*
proszę napisz procedurę, która zapisuje dowolna tablice (dowolny typ i rozmiar) do pliku binarnego. Wskaźnik do pliku ma być jednym z argumentów procedury. Proszę zapisać wywołanie dla tablic:
char tab1[15]
struct tnode{
  int value;
  float var;
  tab2[10];
  float *TAB = calloc  (10, sizeof(int));
*/

#include <stdio.h>

// Procedura do zapisu tablicy do pliku binarnego
void zapiszTabliceDoPliku(void* tablica, size_t rozmiar, size_t iloscElementow, FILE* plik) {
    fwrite(tablica, rozmiar, iloscElementow, plik);
}

int main() {
    char tab1[15];
    struct tnode {
        int value;
        float var;
        int tab2[10];
        float* TAB;
    } tn;

    // Przykładowe inicjalizacje tablicy i struktury tn
    // ...

    // Otwarcie pliku do zapisu w trybie binarnym
    FILE* plik = fopen("plik.bin", "wb");
    if (plik == NULL) {
        printf("Nie można otworzyć pliku.\n");
        return 1;
    }

    // Wywołanie procedury zapisującej tablicę do pliku
    zapiszTabliceDoPliku(tab1, sizeof(char), 15, plik);
    zapiszTabliceDoPliku(&tn, sizeof(struct tnode), 1, plik);

    // Zamknięcie pliku
    fclose(plik);

    return 0;
}
