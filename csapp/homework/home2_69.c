/* 
 * Do rotating left shift. Assume 0 <= n < w
 * Example when x = 0x12345678 and w = 32:
 * n = 4 --> 0x23456781, n = 20 --> 0x67812345 
 */
unsigned rotate_shift(unsigned x, int n);
unsigned rotate_shift(unsigned x, int n) {
	unsigned left = x << n;
	unsigned right =  x >> ((sizeof(x) << 3) - n);
	return left | right;
}
