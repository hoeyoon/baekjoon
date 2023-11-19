#include <stdio.h>

void check_apb(char *s, int *n){
  while(*s != '\0'){
    if('a' <= *s && *s <= 'z'){
      n[*s - 'a']++;
    }
    s++;
  }
}

int find_max(int *n){
  int max = 0;
  for(int i = 0; i < 26; i++){
    if(max < n[i]){
      max = n[i];
    }
  }
  return max;
}

int main(){
  char str[51];
  int apb[26] = {0, };
  while(fgets(str, sizeof(str), stdin)){
    check_apb(str, apb);    
  }
  int max = find_max(apb);
  for(int i = 0; i < 26; i++){
    if(max == apb[i]){
      printf("%c", i + 'a');
    }
  }
  return 0;
}