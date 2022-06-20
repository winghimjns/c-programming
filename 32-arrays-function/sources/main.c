#include <stdio.h>

/**
 * Functions has no way to know the size of an array passed as function
 * arguments, so a "size" argument is definited needed.
 */
int sumOfElements(int a[], int size)
{
	int i, sum = 0;
	printf("Size in sumOfElements: %ld\n", sizeof(*a));
	for (i = 0; i < size; i++)
	{
		sum += a[i];
	}
	return sum;
}

int main()
{
	int a[] = {1, 2, 3, 4, 5};
	int size = sizeof(a) / sizeof(int);

	int *p = a;
	printf("p == %p\n", p);
	(*p)--; // Minus 1 on a[0], so now a[0] == 0
	printf("p == %p\n", p);

	printf("a     == %p\n", a);
	printf("&a[0] == %p\n", &a[0]);
	printf("a[0]  == %d\n", a[0]);
	printf("*a    == %d\n", *a);

	printf("Size: %ld\n", sizeof(a));
	int total = sumOfElements(a, size);
	printf("Sum of elements = %d\n", total);
}
