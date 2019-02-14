#include <stdio.h>
void avg_sum(double a[], int n, double *avg, double *sum){
  int i;
  *sum = 0.0;
  for(i = 0; i < n; i++)
    *sum += a[i];
  *avg = *sum / n;
}
int main(void){
  double a[] = {1,2,34,5};
  int n = 4;
  double average, soma;
  double *avg, *sum;
  avg = &average;
  sum = &soma;
  avg_sum(a, n,avg,sum);
  printf("%lf\n%lf\n",*sum,*avg);
  return 0;
}
