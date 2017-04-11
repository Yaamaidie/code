#include <stdio.h>

/* Divide by power of 2. Assume 0 <=k < w - 1 */
int divide_power2(int x, int k);
int divide_power2(int x, int k) {
	int result = x >> k;
	int w = sizeof(int) << 3; 
	/* when x's the lowest k bytes is not all 0 and x < 0, result + 1 */
	result += x >> (w - 1) && x & ((1 << k) - 1);
	return result;
}
/*
int main(void) {
	printf("%d %d\n", divide_power2(9, 2), divide_power2(-9, 2));
}
*/ 
