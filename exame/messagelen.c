#include <stdio.h>
int main(void){
  int ch = -1, i = 0;
  printf("Introduza a mensagem: ");
  while((ch = getchar()) != '\n'){
    i++;
  }
  printf("O numero de caracteres é: %d\n", i);
  return 0;
}
