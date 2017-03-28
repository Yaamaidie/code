#include <stdio.h>

/* return x div 16*/
/* must use logic right shift*/
int div16(int x) {
	/* compute bias to be either 0 (x >= 0) or 15 (x < 0)*/
	/* 2 ^ 4 = 16, so k = 4*/
	int bias = x >> 31 & 0xF; /* bias = 0000 0000 0000 1111 = 2 ^ 4 - 1*/
	return (x + bias) >> 4;
}

int main(void) {
	printf("12 div 16 = %d, -12 div 16 = %d\n", div16(12), div16(-12));
}
