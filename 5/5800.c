#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  for(int i = 0; i < t; i++){
    int s;
    scanf("%d", &s);
    int n[s];
    for(int j = 0; j < s; j++){
      scanf("%d", &n[j]);
    }
    for(int j = 0; j < s; j++){
      for(int k = 0; k < s; k++){
        if(n[j] > n[k]){
          int temp = n[j];
          n[j] = n[k];
          n[k] = temp;
        }
      }
    }
    int max = -1;
    for(int j = 1; j < s; j++){
      if((n[j - 1] - n[j]) > max){
        max = n[j - 1] - n[j];
      }
    }
    printf("Class %d\n", i + 1);
    printf("Max %d, Min %d, Largest gap %d\n", n[0], n[s - 1], max);
  }
  return 0;
}