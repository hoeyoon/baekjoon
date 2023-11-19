#include <stdio.h>

long long sum_num(char *s1, char *s2){
  long long  sum = 0;
  while(*s1 != '\0'){
    char *p = s2;
    while(*p != '\0'){
      sum += (*s1 - '0') * (*p - '0');
      p++;
    }
    s1++;
  }
  return sum;
}

int main(){
  char str[2][10001];

  scanf("%s %s", str[0], str[1]);
  long long sum = sum_num(str[0], str[1]);
  printf("%lld\n", sum);
  return 0;
}