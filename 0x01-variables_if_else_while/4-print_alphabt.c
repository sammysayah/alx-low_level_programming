#include <stdio.h>
#include <unistd.h>
/**
 * main - This is main function for the program where execultion start 
 * Description:This program will  Prints lowercase alphabet letters except q and e
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
