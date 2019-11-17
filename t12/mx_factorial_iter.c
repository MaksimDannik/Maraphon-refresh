int mx_factorial_iter(int n) {
	int sum = 1;
	int i = 1;
	if(n < 0 || n > 12) 
		return 0; 
	if(n == 0 || n == 1)
		return 1;
	while(i++ < n) {
		sum = sum * i;
	}
	return sum;
}

