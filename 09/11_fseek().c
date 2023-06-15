-Każdemu strumieniowi można przypisać znacznik pozycji w pliku.
  
-Po otwarciu pliku znacznik pozycji w pliku jest ustawiony na początku pliku.
  
-Gdy wykonywana jest operacja odczytu lub zapisu, znacznik pozycji w pliku przesuwa się 
 automatycznie, umożliwiając nam poruszanie się po pliku w sposób sekwencyjny.
  
-int fseek(FILE *stream, long int offset, int origin); - ustawia znacznik pozycji w pliku 
 związanym ze strumieniem (plikiem) stream uwzględniając wartości offset i origin.
  
-Parametr offset to liczba bajtów względem pozycji wyjściowej oznaczonej przez parametr 
 origin.
  
-Wartość parametru origin to jedno z poniższych makr:
    *SEEK SET - szukaj, zaczynając od początku pliku,
    *SEEK CUR - szukaj, zaczynając od aktualnej pozycji w pliku,
    *SEEK END - szukaj, zaczynając od końca pliku.
------------------------------------------------------------------------------------
-Jeśli wywołanie funkcji fseek() się powiedzie, to zwraca ona zero, w przypadku błędu 
 zwracana jest wartość niezerowa.
      
-Na ogół funkcja fseek() powinna być używana w powiązaniu z plikami binarnymi.
      
-Jeśli użyje się jej w powiązaniu z plikiem tekstowym, parametr origin musi mieć wartość 
 SEEK SET, natomiast parametr offset dla tego pliku należy określić, wywołując funkcję 
 ftell(), można też przyjąć wartość 0, aby ustawić wskaźnik na początku pliku.     
------------------------------------------------------------------------------------
//Przykład - zapis do pliku
  double tab[5] = {81., 19., 56., 41., 15.};
  FILE *fp = fopen("tab5.bin", "wb"); 
  if(fp){
    fwrite(tab, sizeof(double), 5, fp);
    fclose(fp); 
  }
------------------------------------------------------------------------------------
//double tab[5] = {81., 19., 56., 41., 15.};
FILE *fp = fopen("tab5.bin","rb");
if(!fp) exit(-1);

fseek(fp, 3L*sizeof(double), SEEK_SET);
double x;
fread(&x, sizeof(double), 1, fp);
printf("x=%.1lf\n", x);
// x = 41.0

fseek(fp, -2L*sizeof(double), SEEK_CUR);
fread(&x, sizeof(double), 1, fp); 
printf("x=%.1lf\n", x);
// x = 56.0
------------------------------------------------------------------------------------
//double tab[5] = {81., 19., 56., 41., 15.};
  
fseek(fp, 1L*sizeof(double), SEEK_CUR) 
fread(&x, sizeof(double), 1, fp); 
printf("x=%.1lf\n", x);
//x = 15.0

fseek(fp, -3L*sizeof(double), SEEK_END); 
fread(&x, sizeof(double), 1, fp); 
printf("x=%.1lf\n", x);
//x = 56.0
------------------------------------------------------------------------------------
//double tab[5] = {81., 19., 56., 41., 15.};
  
fread() odczytał: 
//x = 56.0

if(fseek(fp, -8L*sizeof(double), SEEK_END)){ 
  perror("fseek()"); 
  fprintf(stderr,"fseek() failed in file %s␣at line # %d\n", __FILE__ ,__LINE__ -2); 
  exit(EXIT_FAILURE);
}
//fseak(): Invalid argument
//fseek() failed in file przkd_seek.c at line # 62


