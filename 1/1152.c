#include <stdio.h>

void count_word(char *s, int *n){
  char *p = s;
  while(*p != '\0'){
    if(*p == ' '){
      *n = *n + 1;
    }
    p++;
  }
  *n = *n + 1;
  if(s[0] == ' '){
    *n = *n - 1;
  }
  if(*(p - 1)== ' '){
    *n = *n - 1;
  }
}

int main(){
  char str[1000001];
  int count = 0;
  scanf("%[^\n]s", str);
  count_word(str, &count);
  printf("%d\n", count);
  return 0;
}