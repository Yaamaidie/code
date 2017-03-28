#include <stdio.h>

int main(void) {

	int x = 0x89abcdef;
	int y = 0x76543210;
	
	int result;
	/* target: 0x765432ef */
	result = (y & 0xffffff00) | (x & 0xff);
	printf("%x\n", result);
}
