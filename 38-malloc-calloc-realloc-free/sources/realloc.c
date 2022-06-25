#include <stdlib.h>
#include <stdio.h>

/**
 * malloc
 * calloc
 * realloc
 * free
 */
int main()
{
	int n;
	printf("Enter size of array\n");
	scanf("%d", &n);
	int *a = (int*)malloc(n * sizeof(int)); // Dynamically allocated array
	for (int i = 0; i < n; i++) { a[i] = i + 1; }
	for (int i = 0; i < n; i++) { printf("%d ", a[i]); }
	printf("\n");
	int *b = (int*)realloc(a, (n / 2) * sizeof(int));
	printf("Previous block address = %p, new address = %p\n", a, b);
	for (int i = 0; i < n; i++) { printf("%d ", b[i]); }
	printf("\n");
}
