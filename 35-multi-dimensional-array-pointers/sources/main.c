#include <stdio.h>


int main()
{
	int b[2][3] = {
		{2, 3, 6},
		{4, 5, 8}
	};
	int (*p)[3] = b;

	// The followings should print out the same thing
	printf("b            == %p\n", b);
	printf("&b[0]        == %p\n", &b[0]);
	printf("*b           == %p\n", *b);
	printf("b[0]         == %p\n", b[0]);
	printf("&b[0][0]     == %p\n", &b[0][0]);

	/**
	 * The following is not going to +4, but to +(4*3), because 2nd dimention
	 * array is having a size: 3
	 */
	printf("b + 1        == %p\n", b + 1);
	printf("*(b + 1)     == %p\n", *(b + 1));

	/**
	 * Add a 4*3 than add a 4*2
	 */
	printf("*(b + 1) + 2 == %p\n", *(b + 1) + 2);

	/**
	 * Should be a value instead of a pointer address
	 */
	printf("*(*b + 1)    == %d\n", *(*b + 1));
	return 0;
}
