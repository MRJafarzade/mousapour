#include<stdio.h>

int gcd(int x , int y){
	if(x * y == 0)
	return x + y;
	if (x > y){
		x %= y;
		return gcd(x,y);
	}
	else{
		y %= x;
		return gcd(x,y);
	}
}

int main (){
	int a, b, n, i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		scanf("%d %d", &a, &b);
		printf("%d\n", gcd(a,b));
	}
}
