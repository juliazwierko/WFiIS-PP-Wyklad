void rewind(FILE *stream); 
- ustawia wskaźnik położenia w pliku na początku pliku.
  
float tab[100];
...
FILE *pFile = fopen("myfile.txt", "rb+");
if(pFile){
  int rd = fread(tab, sizeof(float), sizeof( tab)/sizeof(*tab), pFile);
  
  for(int i = 0; i < rd; i++) 
     tab[i] = fun(tab[i]);
 rewind(pFile);
 fwrite(tab, sizeof(float), rd, pFile); 
 fclose(pFile);
}
