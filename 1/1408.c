#include <stdio.h>

int main(){
  int h[2], m[2], s[2];
  for(int i = 0; i < 2; i++){
    scanf("%d:%d:%d", &h[i], &m[i], &s[i]);
  }
  int t = h[1] * 3600 + m[1] * 60 + s[1] - (h[0] * 3600 + m[0] * 60 + s[0]);
  if(t < 0){
    t += 60 * 60 * 24;
  }
  int hour = t / 3600;
  int min = t % 3600 / 60;
  int second = t % 60;
  printf("%02d:%02d:%02d\n", hour, min, second);
  return 0;
}