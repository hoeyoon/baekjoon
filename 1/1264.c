#include <stdio.h>
#include <string.h>

int main(){
  char a[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
  char str[256];
  while(1){
    int count = 0;
    scanf("%[^\n]s", str);
    getchar();
    if(strstr(str, "#")){
      break;
    }
    int len = strlen(str);
    for(int i = 0; i < len; i++){
      for(int j = 0; j < 10; j++){
        if(str[i] == a[j]){
          count++;
        }
      }
    }
    printf("%d\n", count);
  }
  return 0;
}