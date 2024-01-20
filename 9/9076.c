#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);

  int a[5];
  for(int i = 0; i < t; i++){
    for(int j = 0; j < 5; j++){
      scanf("%d", &a[j]);
    }
    for(int j = 0; j < 5; j++){
      for(int k = 0; k < 5; k++){
        if(a[j] < a[k]){
          int temp = a[j];
          a[j] = a[k];
          a[k] = temp;
        }
      }
    }
    if((a[3] - a[1]) >= 4){
      printf("KIN\n");
    }
    else{
      printf("%d\n", a[1] + a[2] + a[3]);
    }
  }
  return 0;
}
