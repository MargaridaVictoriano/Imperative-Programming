#include <stdio.h>
int main(void){
  int a,b,i;
  printf("Introduza o valor de a e b\n");
  scanf("%d%d", &a, &b);
  do{
    printf ("mdc(%d,%d) = ", a, b);
    if (a > b)
              {
                  a -= b;
              }
              else
              {
                  b -= a;
              }


              i++;
      } while (a != b);

      printf("mdc(%d,%d) = %d\n%d iterações\n", a, a, a, i);
  }
