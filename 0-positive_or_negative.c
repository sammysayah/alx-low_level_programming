#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Main function where our program start execulting
 * Description: output  if a random number is positive or negative.
 * Return: 0. Program execution is a success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
