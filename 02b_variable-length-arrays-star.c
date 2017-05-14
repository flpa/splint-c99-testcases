int sum(int values[][*]);

static const int size = 3;
int sum(int values[][size])
{
	int i, sum = 0;
	for (i = 0; i < size; i++) {
		sum += values[0][i] * values[1][i];
	}
	return sum;
}

int main()
{
	int values[2][3] = {{1, 2, 3}, {4, 5, 6}};
	return sum(values);
}
