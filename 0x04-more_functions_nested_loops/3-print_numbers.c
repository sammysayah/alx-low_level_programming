#include "main.h"

/**
 * print_numbers -using print numbers function from main.h and using putchar .
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
