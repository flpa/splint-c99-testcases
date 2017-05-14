#include <stdlib.h>

struct sample {
	int x;
	struct sample *sibling;
};

int main()
{
	int ar[2] = {[1] = 29};
	struct sample s1 = {.sibling = NULL, .x = 1};
	struct sample s2 = {.sibling = &s1};

	return s1.sibling->x + ar[1];
}
