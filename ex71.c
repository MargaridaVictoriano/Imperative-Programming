#include <stdio.h>
#include <ctype.h>
void capitalizar(char str[]){
  for(int i = 0; str[i] != '\0'; i++ ){
    if(islower(str[i])){
      str[i] = toupper(str[i]);
    }
  }
}
int main(void){
  char str[13]="Hello, World";
  capitalizar(str);
  printf("%s\n", str);
  return 0;
}
