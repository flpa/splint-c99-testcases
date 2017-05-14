int f(int p[const])
{
	int var[2];
	p = var;
	return p[0];
}

int main()
{
	int arr[2];
	f(arr);
	return 0;
}
