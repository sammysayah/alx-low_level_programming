#include "main.h"

/**
 *This program will  print the alphabet in lowercase, followed by a new line.
 * return 0 (success)
*/

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	putchar('\n');
}
