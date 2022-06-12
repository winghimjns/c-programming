#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
	char name[50];
	char major[50];
	int age;
	double gpa;
};

int main()
{
	struct Student student1;
	student1.age = 22;
	student1.gpa = 3.2;
	strcpy(student1.name, "Jim");
	strcpy(student1.major, "Business");

	printf("Student1's age: %d\n", student1.age);
	printf("Student1's GPA: %f\n", student1.gpa);
	printf("Student1's name: %s\n", student1.name);
	printf("Student1's major: %s\n", student1.major);

	struct Student student2;
	student2.age = 20;
	student2.gpa = 2.5;
	strcpy(student2.name, "Pam");
	strcpy(student2.major, "Art");

	printf("Student2's age: %d\n", student2.age);
	printf("Student2's GPA: %f\n", student2.gpa);
	printf("Student2's name: %s\n", student2.name);
	printf("Student2's major: %s\n", student2.major);

	return 0;
}
