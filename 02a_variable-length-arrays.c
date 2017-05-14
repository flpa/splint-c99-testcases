int main(int argc, char *argv[])
{
	int write_access[argc];
	int read_access[argc];
	int i;

	if (argc < 1) {
		return 1;
	}
	for (i = 0; i < argc; i++) {
		read_access[i] = i;
	}

	write_access[argc - 1] = 1;
	write_access[2] = 0;

	return read_access[2];
}
