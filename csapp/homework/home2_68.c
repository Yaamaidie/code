#include <stdint.h>
/*
 * Mask with least signficant n bits set to 1 
 * Examples: n = 6 --> 0x3f, n = 17 --> 0x1ffff
 * Assume 1 <= n <= w
*/
int lower_one_mask(int n) {
	long long one = 1;  
	return (one << n) - one;
}

