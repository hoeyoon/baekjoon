#include <stdio.h>

int main(){
  int a, b;
  scanf("%d %d", &a, &b);
  int nums[1001] = {0, };
  int c = 0;
  for(int i = 0; i < 1000; i++){
    for(int j = 0; j < i; j++){
      if(c == 1000){
        break;
      }
      nums[c] = i;
      c++;
    }
  }
  int sum = 0;
  for(int i = a - 1; i < b; i++){
    sum += nums[i];
  }
  printf("%d\n", sum);
  return 0;
}