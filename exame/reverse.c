#include <stdio.h>
#define N 10
int main(void){
int array[N], i;
  printf("Introduza %d números: ", N);
  for(int i = 0; i < N; i++){
    scanf("%d", &array[i]);
  }
  printf("Ordem Inversa: ");
  for(i = N-1; i >= 0; i--){
     printf("  %d", array[i]);
  }
  printf("\n");
  return 0;
}
