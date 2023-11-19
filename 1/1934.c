#include <stdio.h>

int gcd(int a, int b){
  if(b == 0){
    return a;
  }
  else{
    return gcd(b, a % b);
  }
}

int main(){
  int t;
  scanf("%d", &t);

  for(int i = 0; i < t; i++){
    int a, b;
    scanf("%d %d", &a, &b);
    int gcd1 = gcd(a, b);
    printf("%d\n", a * b / gcd1);
  }
  return 0;
}