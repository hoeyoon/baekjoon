#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  int n1;
  int a = 1;
  for(int i = 0; ; i++){
    a += (6 * i);
    if(n <= a){
      n1 = i + 1;
      break;
    }
  }
  printf("%d\n", n1);
  return 0;
}