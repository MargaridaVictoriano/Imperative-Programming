#include <stdio.h>
#include <ctype.h>
char capital(char str[]){
  for(int i = 0; str[i] != '\0'; i++){
    if(islower(str[i]))
      str[i] = toupper(str[i]);
  }
  return 0;
}

int main(void){
  char str[] = {"aaB1aaa"};
  for(int i = 0; str[i] != '\0'; i++){
    capital(str);
    printf("%c", str[i]);
  }
  return 0;
}
