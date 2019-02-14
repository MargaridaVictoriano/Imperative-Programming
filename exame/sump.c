#include <stdio.h>
int soma_vec(int vec[], int n) {
  int soma = 0;
  while(n > 0){
    soma += *vec;
    vec++;
    n--;
  }
  return soma;
}
int main(void){
  int a[] = {1,1,1};
  int n = 3;
  printf("%d\n", soma_vec(a,n));
  return 0;
}
