#include <stdio.h>

int main(){
  int m, n;
  scanf("%d %d", &m, &n);
  int sum = 0, count = 0;

  int min;
  for(int i = 1; i <= 100; i++){
    if(m <= i * i && i * i <= n){
      if(sum == 0){
        min = i * i;
      }
      sum += i * i;
    }
  }
  if(sum == 0){
    printf("-1");
  }
  else{
    printf("%d\n%d", sum, min);
  }
  return 0;
}