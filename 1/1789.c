#include <stdio.h>

int main(){
  long long s;
  scanf("%lld", &s);
  long long i = 0, t = 0;
  while(1){
    i += 1;
    t += i;
    if(t > s){
      break;
    }
  }
  printf("%lld\n", i - 1);
  return 0;
}