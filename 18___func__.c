#include <stdio.h>

void print_fn()
{
	printf("%s\n", __func__);
}
int main()
{
	print_fn();
	printf("%s\n", __func__);
	return 0;
}
