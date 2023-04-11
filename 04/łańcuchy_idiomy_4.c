#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//2
//wczytyanie stringa
int read_line(char str[], int n){
    int c, i = 0;

    do {
        c=getchar();
        if (i < n)
            str[i++] = c;
    }
    while (c != '.');

    str[i] = '\0';
    return i;
}

//3
//spacja 
int c_spaces(const char *str){
    int c=0;
    for( ; *str; str++){ 
        if(*str == ' ')
            c++;
    }
    return c; 
}

//4
//poszukiwanie konca lancucha
int s_size(const char *s){
    int n=0;
    while(*s++) // bo NULL po ASCII to 0;
        n++;
    return n;
}
//4*
int s_size_ptr(const char *s){ 
    const char *p=s;
    while(*s)
    s++; 
    return s-p;
}


int main(){
//4 
    char name[] = "Pawelku";
    int a = s_size(name);
    printf("%d\n", a);


//1
    // char str[10];
    // scanf("%s", str);
    // puts(str);

//2
    char slowo[10];
    int i = read_line(slowo, 10);
    printf("%d\n", i);
    printf("%s\n", slowo);
    //char *slowo2 = malloc(i*sizeof(char));

//3
    int spacja = c_spaces("abc        abc   abc");
    printf("%d\n", spacja);
    return 0;   

//5
    char s[] = "to be or not to be", d[40];
    char *p1 = s, *p2 = d;   
    printf("%s, %s\n", s);

    while(*p2++ = *p1++);
    
    printf("%s, %s\n", s, d);
}
