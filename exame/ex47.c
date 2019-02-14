#include <stdio.h>
int prox_bissexto(int n)
{
  if(n % 4 == 0){
    if((n % 100 == 0) && (n % 400 != 0))
      return prox_bissexto(++n);
  else{
    return n;
  }
}
  return prox_bissexto(++n);

}


int main(void){
  int ano;
  scanf("%d", &ano);
  printf(" %d\n", prox_bissexto(ano));
  return 0;
}
