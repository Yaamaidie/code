#include <stdio.h>
/* Return 1 when any odd bit of x equals 1; 0 otherwise */
int any_odd_one(unsigned x);
int any_odd_one(unsigned x) {
	return 0xaaaaaaaa & x == 0xaaaaaaaa; /* assume x is 32 bytes*/
}
