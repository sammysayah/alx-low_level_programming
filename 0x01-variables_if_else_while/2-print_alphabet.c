#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function where our program start the exucultion
 * DescriptionThis program prints alphabet in lower case with endline at the end of line
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
