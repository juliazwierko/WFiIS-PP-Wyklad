int feof(FILE *stream);
- sprawdza, czy osiągnięto koniec pliku skojarzony ze strumieniem stream.
*Funkcja zwraca wartość niezerową, gdy wskaźnik pozycji w pliku znajduje się na jego końcu.
 W przeciwnym razie zwraca zero.
------------------------------------------------------------------------------------
char *fgets(char *str, int num, FILE *stream); 
- odczytuje znaki z pliku stream i zapisuje je do łańcucha str. Funkcja odczyta num-1 
  znaków o ile wcześniej nie zostanie osiągnięty znak nowej linii.
------------------------------------------------------------------------------------
int fputs(const char *str, FILE *stream); 
- zapisuje łańcuch str do pliku stream.
------------------------------------------------------------------------------------
FILE *tmpfile(void); 
- Tworzy tymczasowy plik binarny, otwarty do aktualizacji (tryb ”wb+”) z nazwą pliku, 
która na pewno różni się od dowolnego innego istniejącego pliku.
*Utworzony plik tymczasowy jest automatycznie usuwany po zamknięciu strumienia (fclose) 
  lub po normalnym zakończeniu programu.
------------------------------------------------------------------------------------
  
  FILE *tmpf = tmpfile(); 
  if (tmpf){
    fputs("Alan␣Turing\n", tmpf); 
    fputs("John␣von␣Neumann\n", tmpf); 
    fputs("Alonzo␣Church\n", tmpf);
    
  rewind(tmpf);

  char buf [7];
  while (fgets(buf, sizeof buf, tmpf) )
    printf("buf␣=␣␣%s\n", buf); 

  if (feof(tmpf))
    puts("\nEnd␣of␣file␣reached.\n"); 

  fclose(tmpf);
}
