#include <stdio.h>
#include <limits.h> 

/* Determinne whether arguments can be substracted without overflow*/
int tsub_ok(int x, int y);
int tadd_ok(); 

int tsub_ok(int x, int y) {
	if (y != INT_MIN) {
		return tadd_ok(x, -y);
	} else {
		if (x <= 0) {
			return 1;
		}  else {
			return 0;
		}
	}
}
int tadd_ok(int x, int y) {
	int sum = x + y;
	int neg_over = x < 0 && y < 0 && sum >= 0;
	int pos_over = x >= 0 && y >> 0 && sum <0;
	return !neg_over && !pos_over;
}
/*
int main(int argc, char *argv[]) {
	printf("%d %d %d\n", tsub_ok(0, INT_MIN), tsub_ok(1, INT_MIN), tsub_ok(-1, INT_MIN));
	printf("%d\n", tsub_ok(-2, INT_MIN + 1));
	return 0;
}
*/
