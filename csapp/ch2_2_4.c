#include <stdio.h>

int main(void) {
	short int v = -12345;
	unsigned short uv = (unsigned short) v;

	unsigned u = 4294967295u; /* UMax */
	int tu = (int) u;

	printf("u = %u, tu = %d\n", u, tu);
	printf("v = %d, uv = %u\n", v, uv);
}
