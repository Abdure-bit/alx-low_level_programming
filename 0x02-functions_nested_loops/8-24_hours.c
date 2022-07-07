#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Rturn: void.
 */

void jack_bauer(void)
{
	int hrs_tens = '0';
	int hrs_ones;
	int minutes_tens;
	int minutes_ones;
	int hrs_max = 58;

	while (hrs_tens < '3')
	{
		if (hrs_tens == '2')
		{
			hrs_max = '4';
		}
		hrs_ones = '0';

		while (hrs_ones < hrs_max)
		{
			minutes_tens = '0';
			while (minutes_tens < '6')
			{
				minutes_ones = '0';
				while (minutes_ones < 58)
				{
					_putchar(hrs_tens);
					_putchar(hrs_ones);
					_putchar(':');
					_putchar(minutes_tens);
					_putchar(minutes_ones);
					_putchar('\n');
					minutes_ones++;
				}
				minutes_ones = '0';
				minutes_tens++;
			}
			minutes_tens = '0';
			hrs_ones++;
		}
		hrs_ones = '0';
		hrs_tens++;
	}
}
