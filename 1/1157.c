#include <stdio.h>
#include <string.h>

void check_str(char *s, int *apb){
  while(*s != '\0'){
    if('a' <= *s && *s <= 'z'){
      apb[*s - 'a']++;
    }
    else if('A' <= *s && *s <= 'Z'){
      apb[*s - 'A']++;
    }
    s++;
  }
}

int find_max(int *apb){
  int max = 0;
  for(int i = 0; i < 26; i++){
    if(max < apb[i]){
      max = apb[i];
    }
  }
  return max;
}

int main(){
  char str[1000001];
  scanf("%s", str);
  
  int apb[26] = {0, };
  
  check_str(str, apb);
  
  int max = find_max(apb);
  
  int count = 0;
  for(int i = 0; i < 26; i++){
    if(apb[i] == max){
      count++;
    }
  }

  int idx = 0;
  for(int i = 0; i < 26; i++){
    if(apb[i] == max){
      idx = i;
    }
  }

  if(count == 1){
    printf("%c\n", idx + 'A');
  }
  else{
    printf("?\n");
  }
  return 0;
}