#include <stdio.h>
#define eprintf(...) fprintf (stderr, __VA_ARGS__)

int main()
{
	eprintf("%d %d\n", 1, 2);
	return 0;
}

