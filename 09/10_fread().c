size t fread(void *ptr, size t size, size t count, FILE *stream ); 
- odczytuje ze strumienia (pliku) binarnego stream dane do tablicy ptr.

size – rozmiar komórki tablicy ptr. 
count – ilość elementów tablicy ptr.
------------------------------------------------------------------------------------
float tab[56];
...
FILE *pFile = fopen("myfile.txt", "rb");
if(pFile){
   fread(tab, sizeof(*tab), sizeof(tab)/sizeof(*tab), pFile);
   fclose(pFile);
------------------------------------------------------------------------------------
