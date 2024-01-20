#include <stdio.h>

int main(){
  int a[10];
  int t;
  scanf("%d", &t);

  for(int i = 0; i < t; i++){
    for(int j = 0; j < 10; j++){
      scanf("%d", &a[j]);
    }
    for(int j = 0; j < 10; j++){
      for(int k = 0; k < 10; k++){
        if(a[j] < a[k]){
          int temp = a[j];
          a[j] = a[k];
          a[k] = temp;
        }
      }
    }
    printf("%d\n", a[7]);
  }
  return 0;
}