#include "main.h"

/**
 * print_triangle -This program will print a triangle in the terminal
 * @size: base & height of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int lnum;
	int lleng;

	for (lnum = 1; lnum <= size; ++lnum)
	{
		for (lleng = size; lleng > lnum; --lleng)
			_putchar(' ');
		for ( ; lleng > 0; --lleng)
			_putchar('#');
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
