int printf(FILE *stream, const char *format, ...);
- wypisuje do strumienia stream wartości argumentów wymienione na liście argumentów
  zgodnie z parametrem format.
 
int printf (const char *format, ... ); 
- wypisuje łańcuch na standardowe wyjście (stdout).
  
int sprintf (char *str, const char *format, ... ); 
- zapisuje łańcuch do bufora/zmiennej (str).
  
int snprintf (char *str, size t n, const char *format, ... ); 
- zapisuje łańcuch do bufora/zmiennej (str) o rozmiarze n.
  
int vprintf (const char *format, va list arg ); 
- wypisuje łańcuch na standardowe wyjście (stdout), używając elementów z arg.
  
------------------------------------------------------------------------------------

int __printf (const char *format , ...){
  va_list arg;
  va_start (arg, format);
  int done = __vfprintf_internal (stdout ,format , arg, 0)
  va_end (arg);
  return done;
}
