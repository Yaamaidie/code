#include <stdio.h>
#include "ch2_1_3.h"

int main(void) {
	short x = 12345;
	short mx = -x;
	
	show_bytes((byte_pointer) &x, sizeof(short));
	show_bytes((byte_pointer) &mx, sizeof(short));
}
