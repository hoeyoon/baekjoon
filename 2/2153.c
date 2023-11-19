#include <stdio.h>

int str_sum(char *s){
  int sum = 0;
  while(*s != '\0'){
    if('a' <= *s && *s <= 'z'){
      sum += *s - 'a' + 1;
    }
    else if('A' <= *s && *s <= 'Z'){
      sum += *s - 'A' + 27;
    }
    s++;
  }
  return sum;
}

int prime_check(int n){
  int count = 0;
  for(int i = 1; i <= n; i++){
    if(n % i == 0){
      count++;
    }
  }
  if(count == 1 || count == 2){
    return 1;
  }
  return 0;
}

int main(){
  char str[21];
  scanf("%s", str);
  int sum = str_sum(str);
  
  if(prime_check(sum) == 1){
    printf("It is a prime word.\n");
  }
  else{
    printf("It is not a prime word.\n");
  }
  return 0;
}