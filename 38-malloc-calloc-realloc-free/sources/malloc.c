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
}
