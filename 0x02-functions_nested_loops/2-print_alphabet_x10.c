#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet tne times.
 *
 * return: Always return 0.
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 97; j < 123; j++)
		{
			_putchar((char)j);
		}
		_putchar('\n');
	}

}
