#include <stdio.h>
#include <string.h>

int main(){
    char str[14];
    scanf("%s", str);

    int len = strlen(str);
    int sum = 0;
    int ck = 0;

    for(int i = 0; i < len; i++){
        if(str[i] != '*'){
            if(i % 2 == 0){
                sum += str[i] - '0';
            }
            else{
                sum += (str[i] - '0') * 3;
            }
        }
        else{
            if(i % 2 == 1){
                ck = 1;
            }
        }
    }
    for(int i = 0; i < 10; i++){
        if((i * ((ck == 1) ? 3 : 1) + sum) % 10 == 0){
            printf("%d", i);
        }
    }
    
    return 0;
}