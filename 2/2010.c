#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  int count = 0;
  int w;
  for(int i = 0; i < n; i++){
    scanf("%d", &w);
    count += w;
  }
  printf("%d\n", count - (n - 1));
  return 0;
}