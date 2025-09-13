#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);

  for(int i = 0; i < t; i++){
    int c;
    scanf("%d", &c);
    int q, d, n, p;
    q = c / 25;
    c -= q * 25;
    d = c / 10;
    c -= d * 10;
    n = c / 5;
    c -= n * 5;
    p = c;
    printf("%d %d %d %d\n", q, d, n, p);
  }
  return 0;
}