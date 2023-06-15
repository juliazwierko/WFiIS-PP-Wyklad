Standard C99 definiuje func , który określa nazwę funkcji, 
w której występuje func . 
  
Przykład:
void myfunk(char *str){
      printf("inside fnctn %s.", __func__);
}
