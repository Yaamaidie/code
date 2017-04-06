#include <stdio.h>

/*
 * Return 1 when x can be represented as an n-bit, 2's-complement
 * number: 0 otherswise
 * Assume 1 <= n <= w
 */
int fits_bits(int x, int n);
int fits_bits(int x, int n) {
	int shift = x >> (n - 1); //if fit x bit vector is [00...(0)] or [11...1(1)] 
	return (shift + 1) == 1 || shift + 1 == 0; 
}

/*
int main(int argc, char *argv[]) {
	int n = 8;
	printf("%d %d\n", fits_bits(-129, n), fits_bits(128, n));
	printf("%d %d\n", fits_bits(-128, n), fits_bits(127, n));
	return 0;
}
*/
