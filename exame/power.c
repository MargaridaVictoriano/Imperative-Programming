#include <stdio.h>
int potencia(int base, int exp) {
  int r = 1;
  while(exp != 0) {
     if (exp%2 != 0) //impar
        r *= base;
    printf("r: %d\n", r);
    printf("base: %d\n", base);
    base = base*base;
    printf("base1: %d\n", base);
    exp = exp/2;
    printf("exp: %d\n", exp);
  }
  printf("rf: %d\n", r);
  return r;
}
int main(void){
  int base = 2, exp = 3;
  printf("%d\n", potencia(base,exp));
  return 0;
}
