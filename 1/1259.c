#include <stdio.h>
#include <math.h>

void count_word(int n[], int count[], int N){
  for(int i = 0; i < N; i++){  
    count[i] = 0;
    while(n[i] != 0){
      n[i] /= 10;
      count[i]++;
    }
  }
}

void word_array(int n[], int c[], int wa[][100], int N){
  for(int i = 0; i < N; i++){
    for(int j = 0; j < c[i]; j++){
      int per1 = pow(10, c[i] - j - 1);
      wa[i][j] = n[i] / per1;
      n[i] %= per1;
    }
  }
}

int main(){
  int n[100];
  int n1[100];
  int count[100];
  int c = 0;
  while(1){
    scanf("%d", &n[c]);
    n1[c] = n[c];
    if(n[c] == 0){
      break;
    }
    c++;
  }
  count_word(n, count, c);
  
  int wa[c][100];

  int count_y[100] = {0, };
  int count_n[100] = {0, };

  word_array(n1, count, wa, c);

  for(int i = 0; i < c; i++){
    for(int j = 0; j < count[i] / 2; j++){
      if(wa[i][j] == wa[i][count[i] - j - 1]){
        count_y[i]++;
      }
      else{
        count_n[i]++;
      }  
    }
  }

  for(int i = 0; i < c; i++){
    if(count[i] % 2 == 1){
      if(count[i] / 2 == count_y[i]){
        printf("yes\n");
      }
      else{
        printf("no\n");
      }
    }
    else{
      if(count[i] / 2 == count_y[i]){
        printf("yes\n");
      }
      else{
        printf("no\n");
      }
    }
  }
  
  return 0;
}