unsigned srl(unsigned x, int k);
int sra(int x ,int k);

unsigned srl(unsigned x, int k) {
	unsigned xsra = (int) x >> k;
	unsigned mask = k ? (1 << (32 - k)) - 1 : 0;
	return mask & xsra;
}

int sra(int x, int k) {
	int xsrl = (unsigned) x >> k;
	unsigned mask = k ? ~(1 << (32 - k)) - 1 : 0;
	return x < 0 ? mask | xsrl : xsrl;
}
