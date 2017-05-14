#include <complex.h>
#include <stdio.h>

int main()
{
	float complex z1 = 1.0 + 3.0 * I;
	double complex z2 = 2.0 + 3.0 * I;
	long double complex z3 = 3.0 + 3.0 * I;
	printf("%f + %fi\n", creal(z1), cimag(z1));

	return 0;
}
