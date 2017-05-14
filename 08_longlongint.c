#include <math.h>
#include <limits.h>

long int get_long()
{
	return LONG_MAX;
}

long long int get_longlong()
{
	return LLONG_MAX;
}

int main()
{
	long int longint;
	long long int longlongint;

	longint = get_long();
	longlongint = longint;
	longint = get_longlong();

	longint = llround(2.0);

	return 0;
}
