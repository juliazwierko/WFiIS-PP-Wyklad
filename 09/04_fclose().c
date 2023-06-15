int fclose(FILE *stream); 

- zamyka strumień stream i opróżnia jego bufor.
*Po wywołaniu funkcji fclose() strumień przestaje być związany z plikiem 
 i wszystkie automatycznie alokowane bufory są zwalniane.
*Zwracaną wartością w przypadku poprawnego zamknięcia pliku jest zero. 
 W przypadku niepowodzenia zawracana jest wartość EOF.
*Błędem jest próba zamknięcia pliku, który już został zamknięty.
------------------------------------------------------------------------------------
char fname[] = "test.dat";
FILE *fp = fopen(fname, "r");
if(!fp){
  printf("Nie␣mozna␣otworzyc:␣%s.\n", fname);
  exit(EXIT_FAILURE);
}
...
  fclose(fp);
------------------------------------------------------------------------------------
