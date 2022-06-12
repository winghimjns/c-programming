#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE * fpointer = fopen("employees.txt", "w");
	fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting\n");

	FILE * fpointer2 = fopen("employees.txt", "a");
	fprintf(fpointer2, "Kelly, Customer Service\n");

	fclose(fpointer);
	return 0;
}
