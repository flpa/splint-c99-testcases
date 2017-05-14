static void f()
{
	for (int i = 0; i < 10; i++) {
		i *= 2;
	}
}

static void g()
{
	int a = 1;
	for (int i; a < 4; a++) {
		i = a;
	}
}

static void h()
{
	for (int i, j = 0; j < 4; j++) {
		i = j;
	}
}

int main()
{
	f();
	g();
	h();

	return 0;
}
