#include <stdio.h>
int segundo_maior(int a[], int n){
  int maior = a[0];
  int smaior = a[0];
  for(int i = 0; a[i] < n; i++ ){
    if(a[i] >= maior){
        maior = a[i];
        if(maior <= smaior){
            smaior = maior;
          }
    }
  }
  return smaior;
}
int main(void){
  int a[] = {1,2,3};
  int n = 3;
  printf("%d\n",segundo_maior(a,n));
  return 0;
}
