/*
  Prosze napisac funkcje ktora umozliwi zapis dowolnego znaku (char) na zadnaej
  pozycji (pos) w pliku binarnym(fname). Prototyp funkcji ma nastepujaca postac:

->  void write_char(const char *fname, long pos, char ch);
  Jesli plik jest krotszy i zadna pozycja w nim nie wystepuje, znak nalezy dopisac
  na koncu plika 
*/

#include <stdio.h>

void write_char(const char *fname, long pos, char ch) {
    FILE *file = fopen(fname, "r+b");
    if (file == NULL) {
        printf("Nie można otworzyć pliku.\n");
        return;
    }

    // Przechodzimy do zadanej pozycji w pliku
    if (fseek(file, pos, SEEK_SET) != 0) {
        // Jeśli nie udało się ustawić pozycji, sprawdzamy, czy to z powodu końca pliku
        fseek(file, 0, SEEK_END);     
    }
    // Zapisujemy znak na aktualnej pozycji w pliku
    fputc(ch, file);

    fclose(file);
}
