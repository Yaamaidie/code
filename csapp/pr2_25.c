#include <stdio.h>

float sum_elements(float a[], unsigned len) {
	int i;
	float result = 0;

	for (i = 0; i <= len - 1; i++) {
		result += a[i];
	}
	return result;
}

int main(void) {
	float a[] = {1.0, 2.0, 3.0};
	printf("%f\n", sum_elements(a, 3));
}
