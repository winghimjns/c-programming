#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2)
{
	if (num1 > num2) { return num1; }
	return num2;
}

int main()
{
	printf("Answer: %d\n", max(2, 9));
	return 0;
}
