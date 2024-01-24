#include <stdio.h>

int selfnum(int n){
  int sum = n;
  while(n > 0){
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main(){

  int a[10001];

  for(int i = 0; i < 10001; i++){
    int check = selfnum(i);
    if(check < 10001){
      a[check] = 1;
    }
  }
  for(int i = 1; i < 10001; i++){
    if(a[i] != 1){
      printf("%d\n", i);
    }
  }
  return 0;
}