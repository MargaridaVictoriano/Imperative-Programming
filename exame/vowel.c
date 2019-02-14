#include <stdio.h>
#include <ctype.h>
int main(void){
int ch = -1, i = 0;
printf("Introduza a frase: ");
while((ch = getchar()) != '\n'){
  ch = toupper(ch);
  if((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U'))
    i++;
}
printf("O numero de vogais é: %d\n", i);
 return 0;
}
