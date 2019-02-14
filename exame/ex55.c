#include <stdio.h>
#include <ctype.h>
int main(void){
  int ch = -1, i = 0;
  printf("Introduza a string: \n");
  while((ch = getchar()) != '\n'){
    if(isalpha(ch))
      i++;
  }
  printf("Numero de letras: %d\n", i);
  return 0;
}
