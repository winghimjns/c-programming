#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	int *p;
	p = &a;
	a = 5;
	printf(" a == %d\n", a);
	printf(" p == %p\n", p);
	printf("&a == %p\n", &a);
	printf("&p == %p\n", &p);
	printf("*p == %d\n", *p);
	*p = 8; printf("*p = 8\n");
	printf(" a == %d\n", a);
	return 0;
}
