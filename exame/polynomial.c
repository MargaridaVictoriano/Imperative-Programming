#include <stdio.h>
int potencia(int base, int exp) {
  int r = 1;
  while(exp != 0) {
     if (exp%2 != 0) //impar
        r *= base;
    //printf("r: %d\n", r);
    //printf("base: %d\n", base);
    base = base*base;
  //  printf("base1: %d\n", base);
    exp = exp/2;
  //  printf("exp: %d\n", exp);
  }
  return r;
}
int pol(int x){
  //3x⁵+2x⁴-5x³-x²+7x-6
return (3*potencia(x,5))+(2*potencia(x,4))-(5*potencia(x,3))-(potencia(x,2))+(7*x)-6;
}
int main(void){
  int x = 3;
  printf("%d\n", pol(x));
  return 0;
}
