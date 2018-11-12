#include <stdio.h>
int main(void){
  int a, b, i;
  printf("Enter the value of a and b \n");
  scanf("%d %d", &a,&b);
  do {
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

     printf("mdc(%d,%d) = %d\n%d iterations\n", a, a, a, i);
 }
