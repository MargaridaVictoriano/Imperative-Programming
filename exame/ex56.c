#include <stdio.h>
#include <ctype.h>
int main(void){
  int ch, prevch = -1;
  while((ch = getchar()) != '\n'){
    if(prevch == ' '){
      ch = toupper(ch);
    }
    prevch = ch;
    putchar(prevch);
  }

  return 0;
}
