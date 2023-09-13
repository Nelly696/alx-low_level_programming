#include "main.h"

/**
 * print_alphabet_x10 - this is the function of the task
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
