int fgetc(FILE *stream); 
- pobiera kolejny znak ze strumienia wejściowego stream.
  
int fputc(int character, FILE *stream);
- zapisuje znak do strumienia wyjściowego stream.
  

FILE *in = fopen(argv[1], "rb"); 
if(!in) exit(EXIT_FAILURE);
FILE *out = fopen(argv[2], "wb"); 
if(!out){
  fclose(in);
  exit(EXIT_FAILURE); 
}
int ch;
while( (ch = fgetc(in))!= EOF) fputc(ch,out); 
fclose(in);
fclose(out);
