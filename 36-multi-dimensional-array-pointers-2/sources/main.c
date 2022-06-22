#include <stdio.h>


void funcA (int a[]) {
	// What ever here is
}

void funcB (int b[][3]) {
	// What ever here is
}

void funcC (int c[][2][2]) {
	// What ever here is
}

int main()
{
	int a[2] = {1, 2};
	int b[2][3] = {
		{2, 4, 6},
		{5, 7, 8},
	};
	int c[3][2][2] = {
		{{2, 5}, {7, 9}},
		{{3, 4}, {6, 1}},
		{{0, 8}, {11, 13}},
	};

	funcA(a); // Works
	funcB(b); // Works
	funcC(c); // Works

	return 0;
}
