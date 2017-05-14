#include <stdio.h>

int main()
{
	double d;
	long double ld;

	scanf("%f\n", &d); //expect warning: %f is float
	scanf("%lf\n", &d);
	scanf("%Lf\n", &d); //expect warning: %Lf is long double

	scanf("%f\n", &ld); //expect warning: %f is float
	scanf("%lf\n", &ld); //expect warning %lf is double
	scanf("%Lf\n", &ld);

	printf("%f\n", d);
	printf("%lf\n", d);
	printf("%Lf\n", d); //expect warning: %Lf is long double

	printf("%f\n", ld); //expect warning: %f is double
	printf("%lf\n", ld); //expect warning: %lf is double
	printf("%Lf\n", ld);

	return 0;
}
