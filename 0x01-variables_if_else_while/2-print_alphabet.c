#include <stdio.h>
#include <unistd.h>
/**
 * main - main function where our program start execulting
 * Description: This program will priint alphabet in lower case
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
return (0);
}
