#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
	int i = 0;
	for(i = 0; i < 6; i++) {
		printf("%d\n", luckyNumbers[i]);
	}
	return 0;
}
