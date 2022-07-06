#include "main.h"

/**
 * _islower - check the code.
 *
 * @c: the function recieves an intiger value
 * Return: 1 if true and 0 f it is false.
 */

int _islower(int c)
{
	int n = (int)c;

	if (n < 97 || n > 123)
		return (0);
	else
		return (1);
}
