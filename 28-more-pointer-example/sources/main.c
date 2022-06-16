#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 1025; // 1025 = 00000000 00000000 00000100 00000001
	int *p;
	p = &a;
	printf("size of integer is %ld\n", sizeof(int));
	printf("Address = %p, value = %d\n", p, *p);
	printf("Address = %p, value = %d\n", p + 1, *(p + 1));
	char *p0;
	p0 = (char*)p; // Typecasting
	printf("size of integer is %ld\n", sizeof(char));
	printf("Address = %p, value = %d\n", p0, *p0);
	printf("Address = %p, value = %d\n", p0 + 1, *(p0 + 1));

	/**
	 * The following code cannot run.
	 */
	// void *p1;
	// p1 = p;
	// printf("Address = %p, value = %d", p1, *p1);

}
