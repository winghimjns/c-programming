#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x = 5;
	int *p;
	p = &x;
	*p = 6;
	int **q;
	q = &p;
	int ***r;
	r = &q;
	printf("%d\n", *p);
	printf("%p\n", *q);
	printf("%d\n", **q);
	printf("%p\n", **r);
	printf("%d\n", ***r);
}
