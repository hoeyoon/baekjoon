#include <stdio.h>

int main(){
  float n;
  float score[1000];
  scanf("%f", &n);
  for(int i = 0; i < n; i++){
    scanf("%f", &score[i]);
  }
  int avg = 0;
  for(int i = 0; i < n; i++){
    if(avg < score[i]){
      avg = score[i];
    }
  }
  float result;
  for(int i = 0; i < n; i++){
    result+=score[i]/avg*100;
  }
  printf("%.2f\n", result);
  return 0;
}