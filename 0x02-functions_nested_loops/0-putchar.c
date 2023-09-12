#include "main.h"
/**
 * main main function where program execution begins
 *Description: prints '_putchar\n' with new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word[8] = "_putchar";
	int letter_index = 0;

	while (letter_index < 8)
	{
		_putchar(word[letter_index]);
		letter_index++;
	}
	_putchar('\n');
	return (0);
}
