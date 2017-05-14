#define SIZE 6

void copy(int * restrict dest, int * restrict source, int n)
{
	int i;
	for (i = 0; i < n; i++, dest++, source++) {
		*dest = *source;
	}
}

int main()
{
	int asc[SIZE];
	int desc[SIZE];
	int i;

	for (i = 0; i < SIZE; i++) {
		asc[i] = i;
		desc[i] = SIZE - i;
	}

	/* copy desc[1-2] to asc[2-3] */
	copy(asc + 2, desc + 1, 2);

	/* copy desc[0-2] to desc[1-3] */
	copy(desc + 1, desc, 3);

	return 0;
}
