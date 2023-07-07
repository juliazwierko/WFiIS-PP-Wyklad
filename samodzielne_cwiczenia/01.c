/*
proszę napisz procedurę, która zapisuje dowolna tablice (dowolny typ i rozmiar) do pliku binarnego. Wskaźnik do pliku ma być jednym z argumentów procedury. Proszę zapisać wywołanie dla tablic:
char tab1[15]
struct tnode{
  int value;
  float var;
}
  tab2[10];
  float *TAB = calloc  (10, sizeof(int));
*/
#include <stdio.h>
#include <stdlib.h>

void zapisz_tablice_do_pliku(void *tablica, size_t rozmiar_elementu, size_t ilosc_elementow, FILE *plik) {
    fwrite(tablica, rozmiar_elementu, ilosc_elementow, plik);
}

int main() {
    // Przykład użycia dla tablicy 'tab1' typu char
    char tab1[15] = "Przykladowy tekst";
    FILE *plik1 = fopen("tablica1.bin", "wb");
    zapisz_tablice_do_pliku(tab1, sizeof(char), 15, plik1);
    fclose(plik1);

    // Przykład użycia dla tablicy 'tab2' typu struct tnode
    struct tnode {
        int value;
        float var;
    } tab2[10];

    FILE *plik2 = fopen("tablica2.bin", "wb");
    zapisz_tablice_do_pliku(tab2, sizeof(struct tnode), 10, plik2);
    fclose(plik2);

    // Przykład użycia dla dynamicznie alokowanej tablicy 'TAB' typu float *
    float *TAB = calloc(10, sizeof(float));

    FILE *plik3 = fopen("tablica3.bin", "wb");
    zapisz_tablice_do_pliku(TAB, sizeof(float), 10, plik3);
    fclose(plik3);

    free(TAB);

    return 0;
}
