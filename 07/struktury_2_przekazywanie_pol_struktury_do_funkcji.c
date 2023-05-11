// Przekazując pole struktury, przekazujemy wartość zmiennej i nie ma znaczenia, że wartość pochodzi ze składowej struktury.
// Przykład.
// Deklaracja funkcji, do której przekazujemy wartość całkowitą: int
// is on shelf(int);
// Wywołanie:int qi = is on shelf(item1.on shelf);
// Pole item1.on shelf jest typu int.
// Aby przekazać adres składowej struktury należy skorzystać z operatora &.
// Przykład.
// Deklaracja:int put on shelf(int*);
// Wywołanie:int iq = put on shelf(&item1.on shelf); Przykład.
// Wywołanie:scanf(”%d”,&item1.on shelf);

#include <stdio.h>
#include <string.h>

struct jeden{
    int id;
    char name[40];
    int os;
}   item4,
    item5 = { .id = 528, .name = "Hard drive", .os = 100}; // standart C99

int main (int argc, char **argv){
    int qi = is_on_shelf(item5.os);
    printf("qi = %d\n", qi);
    return 0;
}
