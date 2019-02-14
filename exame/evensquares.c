#include <stdio.h>
int main(void){
  int n;
  printf("Introduza o valor máximo: \n");
  scanf("%d", &n);
  for(int i = 2; i*i <= n; i += 2){
    //if((i*i%2 == 0) && i*i<=n) desnecessario duh
      printf("%d\n", (i*i));
  }
  return 0;
}
