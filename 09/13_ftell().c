int ftell(FILE *stream);
- zwraca bieżącą wartość znacznika pozycji w pliku stream.
  
Dla strumieni (plików) binarnych jest to liczba bajtów od początku pliku.

W przypadku strumieni tekstowych wartość numeryczna może być trudna do interpretacji 
(koniec linii: CR, LF), ale ciągle jest ona użyteczna jako argument funkcji fseek().
 
Wartość zwracana przez ftell może zostać zapisana, a później wykorzystana do wywołania fseek, umożliwiając powrót do zapisanej
pozycji w pliku:
//zapisz biezaca pozycje
long file_pos = ftell(pFile);
...
//powroc do zapisanej pozycji 
fseek(pFile , file_pos , SEEK_SET);
------------------------------------------------------------------------------------
//Oblicznie rozmiaru pliku:
FILE *pFile = fopen(argv[1], "rb"); 
if(!pFile)
  perror("Error␣opening␣file"); 
else{
  fseek(pFile , 0, SEEK_END);
  int s = ftell(pFile);
  fclose(pFile); 
  printf("Size␣of␣%s:␣%d␣bytes.\n",argv[1],s);
}
// ./a.out a.out 
// Size of ./a.out: 16912 bytes.
// stat --format '%s %N' a.out
// 16912 'a.out'
