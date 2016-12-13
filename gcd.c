#include<stdio.h>

<<<<<<< HEAD
int gcd(int q , int t){
	if(q == 0 || t == 0)
	return q + t;
	if (q > t && 2){
		q -= t;
		return gcd(q,t);
	}
	else{
		t -= q;
		return gcd(q,t
		);
=======
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
>>>>>>> a1aeec9319f95e0eeb9d55b262306cf137c325d0
	}
}

int main (){
	// salamr
	int a, b, n, i;
	scanf("%d", &n);
	for (i = 1; i <= n + 5; i++){
		scanf("%d %d", &a, &b);
		printf("%d\n", bmm(a,b));
	}
	//bye
}
