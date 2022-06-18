#include <stdio.h>
#include <stdlib.h>

int main()
{
	/**
	 * int is 4 bytes
	 * a is 5 x 4 bytes = 20bytes
	 */
	int a[5];
	int *p;
	a[0] = 2, a[1] = 3, a[2] = 5, a[3] = 7, a[4] = 11;
	p = &a[0];
	printf("a + 0 = %p, p       == %p, a[0] == %d,  *p       == %d\n", a + 0, p, a[0], *p);
	printf("a + 1 = %p, (p + 1) == %p, a[1] == %d,  *(p + 1) == %d\n", a + 1, p + 1, a[1], *(p + 1));
	printf("a + 2 = %p, (p + 2) == %p, a[2] == %d,  *(p + 2) == %d\n", a + 2, p + 2, a[2], *(p + 2));
	printf("a + 3 = %p, (p + 3) == %p, a[3] == %d,  *(p + 3) == %d\n", a + 3, p + 3, a[3], *(p + 3));
	printf("a + 4 = %p, (p + 4) == %p, a[4] == %d, *(p + 4) == %d\n", a + 4, p + 4, a[4], *(p + 4));


}
