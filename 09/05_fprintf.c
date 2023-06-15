int fprintf(FILE *stream, const char *format, ...); 
- wypisuje do strumienia stream wartości argumentów wymienione na liście 
  argumentów zgodnie z parametrem format.

-Zwracana wartość jest równa liczbie wypisanych znaków, 
 w przypadku błędu funkcja zwraca wartość ujemną.
   
-Działanie łańcucha formatującego jest identyczne jak w przypadku funkcji printf().
------------------------------------------------------------------------------------
FILE *pFile = fopen("myfile.txt", "w");
if(pFile){
  for(double *pt = tab; pt < tab+10; pt++)
     fprintf(pfile, "%lf\n", *pt););
  fclose(pfile);
}
