static inline void swap(int *m, int *n)
{
	int temp = *m;
	*m = *n;
	*n = temp;
}

int main()
{
	int x = 1;
	int y = 2;
	swap(&x, &y);
	return 0;
}
