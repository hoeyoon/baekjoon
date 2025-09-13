#include <stdio.h>

int gcd(int a, int b){
  int r = a % b;
  if(r == 0){
    return b;
  }
  else{
    return gcd(b, r);
  }
}

int lcm(int a, int b){
  return a * b / gcd(a, b);
}

int main(){
  int t;
  int a, b;
  scanf("%d", &t);
  for(int i = 0; i < t; i++){
    scanf("%d %d", &a, &b);
    printf("%d %d\n", lcm(a, b), gcd(a, b));
  }
  
  return 0;
}