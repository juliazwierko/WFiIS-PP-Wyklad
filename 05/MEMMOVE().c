#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main() {
    //MEMMOVE()
    //void *memmove(void *d,const void *s,size_t n);
    //kopiuje n bajtów z s do d, korzysta z tymczasowego miejsca w pamięci, 
    //aby możliwe było kopiowanie danych do obszaru, który zachodzi na obszar źródłowy.

    char d[7], s[] = {'h','o', 't', '\0', 't', 'e', 'a'};
    memmove(d,s,3);//’h’,’o’,’t’ 
    memmove(d,s,4);//’h’,’o’,’t’,’\0’ 
    memmove(d,s,7);//’h’,’o’,’t’,’\0’,’t’,’e’,’a’
    char str[]="memmove can be very useful......"; 

    puts(str); // memmove can be very usefull......
    memmove(str+20,str+15,11); 

    puts(str); // memmove can be very very usefull.
    return 0; 
}
