#include <stdio.h>

int main(){
	long long x, y, sum;
	scanf("%lld %lld", &x, &y);
	sum = x-y;
	
	if(sum < 0){
		sum = -sum;
	}
	printf("%lld\n", sum);
	return 0;
}