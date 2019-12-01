int var_prod_ele(int n, int A[n][n], int B[n][n], long i, long k) {
	long j;
	int result = 0;
	for (j = 0; j < n; j++) {
		result += A[i][j] + A[j][k]; 
	}
	return result;
}
