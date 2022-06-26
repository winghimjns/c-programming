#include <stdlib.h>

int add (int a, int b) {
	return a + b;
}

void printHello (char *name) {
	printf("Hello %s\n", name);
}

int *func(int, int); // Declaring a function that would return int
int (*pointer)(int, int); // Declaring a function pointer

int main()
{
	// Pointer to function that should take
	// (int, int) as argument and return int
	int (*p)(int, int);
	p = &add; // And actually "p = add;" will do the same
	int c;
	c = (*p)(2, 3);
	printf("%d\n", c);

	void (*p2)(char*);
	p2 = printHello;
	p2("Tom");
	return 0;
}
