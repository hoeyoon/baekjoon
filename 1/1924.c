#include <stdio.h>
#include <string.h>

int main(){
  int x, y;
  scanf("%d %d", &x, &y);

  int sum = 0;
  int day[14] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  for(int i = 1; i <= x - 1; i++){
    sum += day[i];
  }
  char f[7][100] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
  sum = sum + y;
  //printf("%d\n", sum);
  int a = sum % 7;
  char s[100];
  for(int i = 0; i < 7; i++){
    if(a == i){
      strcpy(s, f[i]);
    }
  }
  printf("%s", s);
  return 0;
}