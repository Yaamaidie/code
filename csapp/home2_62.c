#include <stdio.h>
#include <stdbool.h>

bool int_shifts_are_arithmetic();
bool int_shifts_are_arithmetic() {
	int x = -1;
	return !((x >> 1) ^ -1);
}

int main(void) {
	printf("%d\n", int_shifts_are_arithmetic());
}
