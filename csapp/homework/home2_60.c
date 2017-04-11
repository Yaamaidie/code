#include <stdio.h>

unsigned replace_byte(unsigned x, int i, unsigned char b) {
	unsigned char *start = (unsigned char*) &x;
	start[i] = b;
	return x;
}

int main(void) {
	unsigned x, y;
	x = replace_byte(0x12345678, 2, 0xab);
	y = replace_byte(0x12345678, 0, 0xab);
	printf("0x12345678 --> %x, 0x12345678 --> %x\n", x, y);
}
