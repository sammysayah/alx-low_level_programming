#include "main.h"

/**
 * print_square -This program will  print a square in the terminal
 * @size: size of square
 *
 * Return: void
 */
void print_square(int size)
{
	int lnum;
	int lleng;

	for (lnum = 0; lnum < size; ++lnum)
	{
		for (lleng = 0; lleng < size; ++lleng)
			_putchar('#');
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
