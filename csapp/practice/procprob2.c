unsigned long procprob2(int b, short a, long *v, char *u) 
{
	*u += a;
	*v += b;
	return sizeof(a) + sizeof(b);
}
