size t fwrite(const void *ptr, size t size, size t count, FILE *stream ); 
- zapisuje tablicę ptr do strumienia (pliku) binarnego stream.

size – rozmiar komórki tablicy ptr. 
count – ilość elementów tablicy ptr.

------------------------------------------------------------------------------------
float tab[56]
...
FILE *pFIle = fopen("myfile.dat", "wb");
if(pFile){
  fwrite(tab, sizeof(float), sizeof(tab)/sizeof(*tab), pFile);
  fclose(pFile);
}
------------------------------------------------------------------------------------
float tab[]={1.2, 3.4, 5.6};
FILE *pFile = fopen("tabhex.bin", "wb");
if(pFile){
  fwrite(tab, sizeof(float), 3, pFile);
  fclose(pFile);
}
------------------------------------------------------------------------------------
