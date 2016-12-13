#include<stdio.h>

int gcd(int q , int t){
	if(q == 0 || t == 0)
	return q + t;
	if (q > t && 2){
		q -= t;
		return gcd(q,t);
	}
	else{
		t -= q;
		return gcd(q,t);
	}
}

int main (){
	// salamr
	int a, b, n, i;
	scanf("%d", &n);
	for (i = 1; i <= n + 5; i++){
		scanf("%d %d", &a, &b);
		printf("%d\n", gcd(a,b));
	}
	//bye
}
