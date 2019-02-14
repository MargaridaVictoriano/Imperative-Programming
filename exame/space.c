#include <stdio.h>
int space(char str[]){
  int space = 0;
  for(int i = 0; str[i] != '\0'; i++){
    if(str[i] == ' '){
      space++;
    }
  }
  return space;
}
int main(void){
  char str[] = {"olatudobemnice"};
  printf("%d\n", space(str));
  return 0;
}
