#include <stdio.h>
#include <string.h>

void print(char *c) {
	int i = 0;
	while(c[i] != '\0') {
		printf("%c", c[i]);
		// printf("%c", *(c + i)); // This line performs the same
		i++;
	}
	printf("\n");
}

int main()
{
	char c[20] = "Hello";
	print(c);
	return 0;
}
