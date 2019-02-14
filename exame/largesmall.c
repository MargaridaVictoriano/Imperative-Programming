#include <stdio.h>
void max_min(int a[], int n, int *max, int *min){
  *min = a[0];
  *max = a[0];
  for(int i = 0; i < n; i++){
    if(a[i] < *min){
      *min = a[i];
    }
    else if(a[i] > *max){
      *max = a[i];
    }
  }
}
int main(void){
  int a[] = {34,82,49,102,7,94,23,11,50,31};
  int n = 10, maxim, mini;
  int *max, *min;
  max = &maxim;
  min = &mini;
  max_min(a, n, max, min);
  printf("%d\n%d\n",maxim, mini);
  return 0;
}
