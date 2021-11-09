#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
*foo_d -Print a decimal
*@args: Decimal to print
*Return: Number of digits printes
*/
int foo_d (va_list args)
{
	int a[10];
	int i, j, k, l, sum;

	k = va_arg(d, int);
	l = 0;
	j = 100000000;
	a[0] = k / j;
	for (i = 1; i < 10; i++)
	{
		j /= 10;
		a[i] = (k / j) % 10;
	}
	if (k < 0)
	{
		_putchar('-');
		l++;
		for (i = 0; i < 10; i++)
			a[i] *= -1;
	}
	for (i = 0, sum = 0; i < 10; i++)
	{
		sum += a[i];
		if (sum != 0 || i == 9)
		{
			_putchar('0' + a[i]);
			l++;
		}
	}
	return (l);
}
