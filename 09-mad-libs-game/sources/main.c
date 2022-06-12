#include <stdio.h>
#include <stdlib.h>

int main()
{
	char color[16]; // Red?
	char pluralNoun[32]; // Violets?
	char celebrity[32]; // you?

	printf("Enter a color: ");
	scanf("%s", color);
	printf("Enter a plural noun: ");
	scanf("%s", pluralNoun);
	printf("Enter a celebrity: ");
	scanf("%s", celebrity);

	printf("Roses are %s\n", color);
	printf("%s are blue\n", pluralNoun);
	printf("I love %s\n", celebrity);

	return 0;
}
