#include <stdio.h>

int main(){
  int A, B;
  double sum;
  scanf("%d %d", &A, &B);
  sum = ((double)A / (double)B);
  printf("%.9lf\n", sum);
  return 0;
}