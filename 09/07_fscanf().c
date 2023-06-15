int fscanf(FILE *stream, const char *format, ...); 
- odczytuje dane ze strumienia stream zgodnie z parametrem format.
  
*Zwracana wartość jest równa liczbie argumentów, którym udało się przypisać wartość,
*Działanie łańcucha formatującego jest identyczne jak w przypadku funkcji scanf().
 
FILE *pFile = fopen("myfile.txt", "r"); 
  if(pFile){
     for(double *pt = tab; pt < tab+10; pt++) 
       fscanf(pFile , "%lf", pt);
    fclose (pFile);
  }

