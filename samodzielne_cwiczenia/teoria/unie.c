typedef struct
{
        int x; // 4 bajty + padding
        double y; // 8 bajtow
        char z; // 1 bajt + padding
} point_struct;

typedef union // calosc: 8 bajtow
{
        int x;
        double y;
        char z;
} point_union;

point_struct s = {1, 2.0, '3'};
point_union u = {.y = 2.0};
//Rozmiar unii jest równy rozmiarowi maksymalnego z zadeklarowanych składników 


//////////////////////////////////////////////////////////////////////////////
typedef struct
{
        enum { INT, DOUBLE, CHAR } type;
        union
        {
            int x;
            double y;
            char z;
        } union_member;
} point;

void print_point(point *p)
{
        switch (p->type)
        {
        case INT:
            printf("x = %d\n", p->union_member.x);
            break;
        case DOUBLE:
            printf("y = %f\n", p->union_member.y);
            break;
        case CHAR:
            printf("z = %c\n", p->union_member.z);
            break;
        }
}
// point p = {DOUBLE, {.y = 2.0}};
// print_point(&p);


//////////////////////////////////Unie anonimowe////////////////////////////////
typedef struct
{
    enum { INT, DOUBLE, CHAR } type;
    union
    {
        int x;
        double y;
        char z;
    };
} point_anonymous;

void print_point_anonymous(point_anonymous *p)
{
    switch (p->type)
    {
    case INT:
        printf("x = %d\n", p->x);
        break;
    case DOUBLE:
        printf("y = %f\n", p->y);
        break;
    case CHAR:
        printf("z = %c\n", p->z);
        break;
    }
}

//WYWOLANIE 
// point_anonymous a = {CHAR, {.z = 'A'}}; 
// print_point_anonymous(&a);
