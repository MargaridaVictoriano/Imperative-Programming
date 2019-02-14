#include <stdio.h>
int main(void){
  int n = 1 , soma = 0;
  printf("Introduza o número: ");
  scanf("%d",&n);
    for(int i = 1; i < n; i++){
      if(n % i == 0){
        soma+=i;
      }
    }
  printf("A soma é : %d\n", soma);
  return 0;
}
