#include <stdio.h>
#include <stdlib.h>

// void a () { printf("hello"); }
// void b(void (*ptr)()) { ptr(); }
//
// void main () {
	// 	void (*p)() = &a;
	// 	b(p);
// }

/**
* Simple bubble sort algorithm
*/
void bubbleSort (int a[], int n, int (*compare)(int, int)) {
	int i, j, temp;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - 1; j++) {
			// if (a[j] > a[j + 1]) {
			if (compare(a[j], a[j + 1]) > 0) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

// int bubbleCompare (int a, int b) { return a > b ? 1 : -1; }
int bubbleCompare (int a, int b) { return a < b ? 1 : -1; }
int compare (const void *a, const void *b) {
	int av = *((int*)a);
	int bv = *((int*)b);
	return av - bv;
}

int main () {
	int i, size, a[] = {3, 2, 1, 5, 6, 4}, b[] = {-31, 22, -1, 50, -6, 4};
	size = sizeof(a) / sizeof(int);
	bubbleSort(a, size, bubbleCompare);
	for (i = 0; i < size; i++) { printf("%d ", a[i]); }
	printf("\n");

	// From library
	size = sizeof(b) / sizeof(int);
	qsort(b, size, sizeof(int), compare);
	for (i = 0; i < size; i++) { printf("%d ", b[i]); }
	printf("\n");
}
