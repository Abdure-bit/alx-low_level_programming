#include "main.h"
/**
 * print_alphabet - Prints the alphabet followed by new line
 *
 * return: Always return 0(Success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar((char)i);
	}

		_putchar('\n');
}
