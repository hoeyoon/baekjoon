#include <stdio.h>
#include <stdlib.h>

typedef struct{
  int age;
  int idx;
  char name[101];
} Person;

int compare(const void *a, const void *b){
  Person *A = (Person*)a;
  Person *B = (Person*)b;

  if(A->age < B->age){
    return -1;
  }
  else if(A->age > B->age){
    return 1;
  }
  else{
    if(A->idx < B->idx){
      return -1;
    }
    else{
      return 1;
    }
  }
  return 0;
}

int main(){
  int n;
  scanf("%d", &n);
  Person p[n];

  for(int i = 0; i < n; i++){
    scanf("%d %s", &p[i].age, p[i].name);
    p[i].idx = i;
  }
  qsort(p, n, sizeof(Person), compare);
  for(int i = 0; i < n; i++){
    printf("%d %s\n", p[i].age, p[i].name);
  }
  return 0;
}