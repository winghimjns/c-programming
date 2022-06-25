#include <stdlib.h>
#include <stdio.h>

void printHelloWorld () {
	printf("hello, world\n");
}

int *add (int *a, int *b) {
	int c = (*a) + (*b);
	return &c;
}

int main()
{
	int x = 2, y = 4;
	int *z = add(&x, &y);
	printHelloWorld();
	/**
	 * Failed to print out the answer. Use heap instead
	 */
	printf("Sum = %d\n", *z);
}
