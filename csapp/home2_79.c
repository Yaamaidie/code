#include <stdio.h>

/* compute 3 * x / 4 */
int mul3div4(int x);
int mul3div4(int x) {
	int temp = x >> 4;
	return x << 1 + x;  
}

