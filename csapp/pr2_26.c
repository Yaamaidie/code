#include <stdio.h>
#include <string.h>

int strlonger(char *s, char *t) {
	return strlen(s) > strlen(t);
}

int main(void) {
	char *s = "123";
	char *t = "abcd";
	printf("%d\n", strlonger(s, t));

}
