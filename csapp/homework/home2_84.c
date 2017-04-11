#include <stdio.h>

unsigned f2u(int x);
int float_le(float x, float y);

int float_le(float x, float y) {
	unsigned ux = f2u(x);
	unsigned uy = f2u(y);
	
	/* Get the sign bits*/
	unsigned sx = ux >> 31;
	unsigned sy = uy >> 31;

	/* Give an expression using only ux, uy, sx, sy */
	return (sx == 1 && sy == 1 && ux >= uy)
	  	|| (sx == 1 && sy == 0)
		|| (sx == 0 && sy == 0 && ux <= uy)
		|| (sx == 0 && sy == 1 && ux << 1 == 0 && uy << 1 == 0);
}

int main(void) {
	printf("%d %d %d %d\n", float_le(-2.1, -1.1), float_le(-1, 1),
		 float_le(2.1, 2.2), float_le(0, -0));
}
