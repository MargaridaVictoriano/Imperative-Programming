#include <stdio.h>
int main(void){
  float n, soma;
  printf("Introduza valores; 0 termina.\n");
  scanf("%f", &n);
  while(n!=0){
    soma += n;
    scanf("%f", &n);
  }
  printf("A soma dos valores é: %f\n",soma);
  return 0; 
}
