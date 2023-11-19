#include <stdio.h>

int main(){
  int n;
  int a[100];
  int count = 0;
  int count_a[100] = {0, };
  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }
  for(int i = 0; i < n; i++){
    for(int j = 1; j <= a[i]; j++){
      if(a[i] % j == 0){
        count_a[i]++;
      }
    }
    if(count_a[i] == 2){
      count++;
    }
  }
  printf("%d\n", count);
  return 0;
}