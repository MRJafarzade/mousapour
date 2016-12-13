#include<stdio.h>

int bmm(int x , int y){
	if(x * y == 0)
	return x + y;
	if (x > y){
		x %= y;
		return bmm(x,y);
	}
	else{
		y %= x;
		return bmm(x,y);
	}
}

int main (){
	// salamr
	int a, b, n, i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		scanf("%d %d", &a, &b);
		printf("%d\n", bmm(a,b));
	}
}
