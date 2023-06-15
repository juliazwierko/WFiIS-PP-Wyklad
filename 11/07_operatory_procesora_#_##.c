operator #
operator ##
------------------------------"#"--------------------------------
# - operator tworzenia łańcuchów, zamienia poprzedany 
    argument na łańcuch(ciąg znaków otoczony znakami cudzysłowu)
-----------------------------------------------------------------
1)#define mkstr(s) # s
...
printf (mkstr(some words in a string));
*zostanie przeksztalcone do
printf ("some␣words␣in␣a␣string");

-----------------------------------------------------------------
2)
#define PRINT_INT(n) printf(#n " = %d\n", n);

*wywolanie 
  PRINT_INT(i/j);
*zostanie przeksztalcone do
  printf("i/j" " = %d\n", i/j);
*A po automatycznym scaleniu
  printf("i/j␣=␣%d\n", i/j);
*I dla i=11 oraz j=2 zostanie wypisane:
  i/j = 5
    
------------------------------"##"-------------------------------
Operator sklejania łańcuchów ##, łączy dwa obiekty.
*Przykład:
#define concat(a, b) a##b
...
int xy =10;
printf ("xy=%d", concat(x,y)); //xy = 10

*Przykład:
#define mk_id(n) i##n
...
int mk_id(1), mk_id(2), mk_id(3);
Zostanie przekształcone do
int i1, i2, i3;
-----------------------------------------------------------------
#define GENERIC_MAX(type) type type##_max(type x, type y) { return x > y ? x : y; }
*wywolanie
  GENERIC_MAX(float);
*rownowazne temu
  float float_max(float x, float y) { 
    return x > y ? x : y; 
   }

  
