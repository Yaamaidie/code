#include <stdio.h>
void *calloc(size_t nmeb, size_t size);
void *malloc(size_t size);
void *memset(void *s, int c, size_t n);

void *calloc(size_t nmeb, size_t size) {
	if (nmeb == 0 || size == 0) {
		return NULL;
	} 
	void *p = malloc(size * nmeb);
	if (p != NULL) {
		memset(p, 0, size * nmeb);
		if(p != NULL) {
			return p;
		} else {
			return NULL;
		}
	} else {
		return NULL;
	}
}
