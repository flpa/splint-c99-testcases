#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct str {
	size_t length;
	char chars[];
};

struct str *allocate_str(const char* s)
{
	size_t i, len;
	struct str *result;

	len = strlen(s);
	result = malloc(sizeof(*result) + len * sizeof(char));
	if (!result) {
		exit(EXIT_FAILURE);
	}
	result->length = len;

	for (i = 0; i < len; i++) {
		result->chars[i] = s[i];
	}

	return result;
}

int main()
{
	size_t i;
	struct str* v = allocate_str("test");
	for (i = 0; i < v->length; i++) {
		printf("%c\n", v->chars[i]);
	}
	v->chars[4] = '!';
	free(v);
	return 0;
}
