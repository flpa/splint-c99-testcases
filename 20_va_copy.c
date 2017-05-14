#include <stdarg.h>
#include <stdio.h>

void f(int n, ...)
{
	va_list orig, copy;
	int i;
	va_start(orig, n);
	va_copy(copy, orig);

	for (i = 0; i < n; i++) {
		printf("%f and %f\n", va_arg(orig, double), va_arg(copy, double));
	}
	va_end(orig);
	va_end(copy);
}

int main()
{
	f(3, 1.0, 2.0, 3.0);
	return 0;
}
