#include <stdio.h>
#include <limits.h>

/* Addition that saturates to TMin or TMax */
int saturating_add(int x, int y);
int saturating_add(int x, int y) {
	int sum = x + y;
	int t = x + y;
	int w = sizeof(int) << 3;
	x >>= (w - 1);
	y >>= (w - 1);
	t >>= (w - 1);
	int pos_over = ~x & ~y & t; /*正溢出时x > 0 && y > 0 && x +ｙ < 0*/
	int neg_over = x & y & ~t; /* 负溢出时x < 0 && y < 0 && x + y > 0*/
	int no_over = ~(pos_over | neg_over);/* 没有溢出*/
	return (pos_over & INT_MAX) | (neg_over & INT_MIN) | (sum & no_over);
}
int main(int argc, char *argv[]) {
	printf("%d %d %d\n", saturating_add(INT_MIN, -1), saturating_add(1, 2), 
			saturating_add(INT_MAX, 1));
	return 0;
}
