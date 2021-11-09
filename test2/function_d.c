#include "main.h"

/**
 * function_d - Prints integer.
 * @n: The integer to printeded.
 *Return: a
 */
int function_d(long int n)
{
	long int d = n;
	int f = 0;

	if (n)
	{
		if (n < 0)
		{
			f += _putchar('-');
			d = -d;
		}
		if ((d / 10) > 0)
			f += function_d(d / 10);
		f += _putchar((d % 10) + '0');
	}
	else
	{
		f += _putchar(n + '0');
	}
	return (f);
}
