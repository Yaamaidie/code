#include <stdio.h>
/*
 * Declaration of data type where 4 bytes are packed
 * into an unsigned 
 */
typedef unsigned packed_t;
   
/* Extract byte from word. Return as signed integer */
int xbyte(packed_t word, int bytenum);
int xbyte(packed_t word, int bytenum) {
	return (char) ((word >> (bytenum << 3)) & 0xff); 
}

/*	 
int main(int argc, char *argv[]) {
	unsigned x = 0xffffff1f;
	printf("%x %x\n", xbyte(x, 0), xbyte(x, 1));
	return 0;
}
*/
