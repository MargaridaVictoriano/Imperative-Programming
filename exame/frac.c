#include <stdio.h>
int main(void){
  int a, b, num, denom;
  printf("Introduza os valores: ");
  scanf("%d%d", &num, &denom);
  a = num;
  b = denom;
  while (a != b) {
     if(a > b)
         a = a - b;
      else
         b = b - a;
   }
  printf("O mdc é: %d\n",a);
  num /= a;
  denom /= b;
  printf("A fracao é: %d/%d\n",num,denom);
  return 0;

}
