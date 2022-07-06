#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet tne times.
 *
 * return: Always return 0.
 */

void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 97; j < 123; j++)
		{
			_putchar((char)j);
		}
		_putchar('\n');
	}

}
