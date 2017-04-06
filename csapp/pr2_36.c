#include <stdio.h>
#include <stdint.h>
#include "pr2_36.h"

int main(void) {
	printf("%d\n", tmult_ok(12, 13));
	return 0;
}

/* Determine whether the arguments can be multiplied */
/* without overflow */
int tmult_ok(int x, int y) {
	int64_t pll = (int64_t) x * y;
	return pll == (int) pll;
}
