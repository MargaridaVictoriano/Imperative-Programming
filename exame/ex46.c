#include <stdio.h>
int bissexto(int n){
  if(n%4==0){
     if((n%100==0) && (n%400!=0))
     return 0;
  else{
    return 1;
  }
  }
  return 0;
}


int main(void)

{ int x;
  scanf("%d", &x);
  printf("A %d\n", bissexto(x));
}
