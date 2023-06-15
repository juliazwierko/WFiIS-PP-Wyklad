void fflush(FILE *stream); 
- opróżnia bufor do pliku wskazywanego przez stream.
  Zwraca zero jeżeli operacja zapisu się udała, w przeciwnym przypadku zwraca EOF.
  
fflush(NULL); 
- opróżnia wszystkie bufory.
  
nt setvbuf(FILE *stream, char *buffer, int mode, size t size);
- ustawia rozmiar, położenie i tryb bufora.
  
Tryby bufora:
  *IOFBF - pełne buforowanie. Na wyjściu, dane są zapisywane kiedy bufor jest pełny 
           lub wywołano funkcję fflush(). Na wejściu bufor jest wypełniany kiedy program 
           wywoła funkcję obsługi wejścia i bufor jest pusty.
  *IOLBF - liniowe buforowanie. Na wyjściu, dane są zapisywane kiedy znak końca linii jest 
           wstawiony do strumienia wyjściowego albo kiedy bufor jest pełny albo użyto 
           fflush(). Na wejściu, bufor jest wypełniany aż do pojawienia się znaku końca 
           linii.
  *IONBF - brak buforowania. Każda operacja we/wy wykonywana jest bez buforowania.
------------------------------------------------------------------------------------
#include <unistd.h> //sleep(unsigned int seconds);
...
int main(void){
char buff [1024]; 
memset(buff,’\0’,sizeof(buff));
fprintf(stdout ,"Going␣to␣set␣full␣buffering"); 
setvbuf(stdout, buff, _IOFBF, 1024); 
fprintf(stdout ,"This␣is␣the␣first␣line"); 
fprintf(stdout ,"This␣output␣will␣go␣to␣buff"); 
fflush(stdout);
fprintf(stdout ,"will␣appear␣when␣programme"); 
fprintf(stdout ,"will␣come␣after␣sleeping␣5s"); 
sleep(5);
return 0;
}
/*
Going to set full buffering on 
This is tutorials.com
This output will go into buff
will appear when programme 
will come after sleeping 5s
*/
