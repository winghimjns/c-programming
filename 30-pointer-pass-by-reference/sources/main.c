#include <stdio.h>
#include <stdlib.h>

void pointlessIncrement(int a) {
	a = a + 1;
	printf("Address of variable a in pointlessIncrement() = %p\n", &a);
}

void Increment(int *p) {
	*p = *p + 1;
}

int main()
{
	int a;
	a = 10;
	pointlessIncrement(a);
	printf("Address of variable a in main()      = %p\n", &a);
	printf("After pointlessIncrement(), a = %d\n", a);
	Increment(&a);
	printf("After Increment(), a = %d\n", a);
	// printf("a = %d\n", a);
}
