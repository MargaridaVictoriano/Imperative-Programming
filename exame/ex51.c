#include <stdio.h>
#define FALSE 0
#define TRUE 1
int primo(int n)
{
   int d;
   if(n <= 1) return FALSE;
   for (d = 2; d*d <= n; d++) {
     if (n%d == 0)   // d divide n
       return FALSE;
    }
   return TRUE;
}
int main(void){
  int limite, n, i;
  printf("Introduza o limite maximo: \n");
  scanf("%d", &limite);
  for(i = 0; i <= limite; i++){
    n = primo(i);
    if(n == 1){
      printf("%d\n", i);
    }
  }
  return 0;
}
