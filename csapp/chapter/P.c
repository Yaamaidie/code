int Q(long x) 
{
	return x + 1;
}
int P(long x, long y)
{
	long u = Q(y);
	long v = Q(x);
	return u + v;
}
