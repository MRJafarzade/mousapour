int prime(int x){
	int i;
	if (x <= 1) return 0;
	for (i = 2; i <= sqrt(x); i++){
		if (x % i == 0){
			return 0;
		}
	}
 return 1;
}
