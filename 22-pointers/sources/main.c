#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int age = 30;
	int * pAge = &age;
	double gpa = 3.4;
	double * pGpa = &gpa;
	char grade = 'A';
	char * pGrade = &grade;

	printf("age's memory address: %p\n", pAge);
	printf("gpa's memory address: %p\n", pGpa);
	printf("grade's memory address: %p\n", pGrade);

	return 0;
}
