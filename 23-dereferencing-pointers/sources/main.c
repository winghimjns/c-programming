#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int age = 33;
	int *pAge = &age;

	printf("%p\n", &pAge);
	printf("%d\n", *pAge);

	return 0;
}
