#include <stdio.h>
#include <ctype.h>
void capitalize(char str[]){
  for(int i = 0; str[i] != '\0'; i++ ){
    if(islower(str[i])){
      str[i] = toupper(str[i]);
    }
  }
}
int main(void){
  char str[13]="Hello, World";
  capitalize(str);
  printf("%s\n", str);
  return 0;
}
