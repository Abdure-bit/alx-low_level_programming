#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	int n=(int)c;
	if(n<97 || n>123)
		return (0);
	else
		return (1);
}
