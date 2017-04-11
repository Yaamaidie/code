#include <stdio.h>

/* little endian return 1, big endian return 0 */
int is_little_endian(void) {
	int x = 1;
	unsigned char *first_byte_pointer = (unsigned char*) &x;
	return (int) *first_byte_pointer;
}

int main(void) {
	printf("%d\n", is_little_endian());
}
