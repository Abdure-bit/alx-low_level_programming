#include "main.h"

/**
 * _abs - Entry point
 *
 * @n: an integer value
 * Return: 0 for success.
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
