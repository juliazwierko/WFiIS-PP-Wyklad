#include <stdlib.h>
#include <stdio.h>
#include <string.h>

enum Token {
    SYMBOL,         //0
    NUMBER,         //1
    EXPRESSION = 0, //0
    OPERATOR,       //1
    UNDEFINED       //2
};
 
// enum Token {
//     SYMBOL,             //0
//     NUMBER,             //1
//     EXPRESSION = 10,    //10
//     OPERATOR,           //11
//     UNDEFINED           //12
// };

int main() {
    enum Token a, b, c, d, e;
    a = SYMBOL;
    b = NUMBER;
    c = EXPRESSION;
    d = OPERATOR;
    e = UNDEFINED;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);
    printf("e = %d\n", e);
    // a = 0
    // b = 1
    // c = 0
    // d = 1
    // e = 2
    return 0;
}
