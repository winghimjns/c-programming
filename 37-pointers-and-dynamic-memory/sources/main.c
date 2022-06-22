#include <stdio.h>

/**
 * malloc
 * calloc
 * realloc
 * free
 */
int main()
{
	int a;
	int *p;
	p = (int*)malloc(sizeof(int)); // Allocating memory from heap
	*p = 10;
	free(p); // Free and flush
	p = (int*)malloc(sizeof(int)); // Allocating memory from heap
	*p = 20;
	free(p); // Free and flush
}
