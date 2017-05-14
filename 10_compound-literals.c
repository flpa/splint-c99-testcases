int *p = (int []) {2, 4};

struct x {
	int a;
	int b;
};

int f(struct x in)
{
	return in.a + in.b;
}

int main(int argc, char** argv)
{
	return f((struct x) {argc, -argc});
}
