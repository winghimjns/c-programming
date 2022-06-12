#include <stdio.h>
#include <stdlib.h>

int main()
{
	// int age;
	// printf("Enter your age: \n");
	// scanf("%d", &age);
	// printf("You are %d years old.\n", age);
	//
	// double gpa;
	// printf("Enter your gpa: \n");
	// scanf("%lf", &gpa);
	// printf("You GPA is %f.\n", gpa);
	//
	// char grade;
	// printf("Enter your grade: \n");
	// scanf("%c", &grade);
	// printf("You grade is %c.\n", grade);
	//
	// char name[20];
	// printf("Enter your name: \n");
	// scanf("%s", name);
	// printf("You name is %s.\n", name);

	char name[20];
	printf("Enter your name: \n");
	fgets(name, 20, stdin);
	printf("You name is %s.\n", name);

	return 0;
}
