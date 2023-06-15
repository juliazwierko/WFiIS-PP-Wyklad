#include <stdio.h> 
#include <math.h>
#define cbroot(X) _Generic((X), long double: cbrtl, default: cbrt, float: cbrtf)(X)
------------------------------------------------------------------------------
//W zależności od przekazanego typu X kompilator wybiera odpowiednią funkcję.
int main(void){
  double x = 8.0; 
  float y = 27.0; 
  printf("cbrt(8.0)=␣%lf", cbroot(x)); 
  printf("cbrtf(27.0)=␣%f", cbroot(y)); 
  return 0;
}
------------------------------------------------------------------------------
cbrt(8.0) = 2.000000
cbrtf(27.0) = 3.0000000
