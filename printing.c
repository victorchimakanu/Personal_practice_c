#include <stdio.h>

/**
 *main - this prints 
 *Return : this returns 0
 */

int main(void)
{
	char name[100];
	
	printf("Enter a name\n");
	fgets(name, 100, stdin);

	printf("Your name is : %s\n", name);
	puts("My name will be under\n");
	puts(name);

	return (0);
}
