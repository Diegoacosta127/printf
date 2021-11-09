#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
*foo_d -Print a decimal & an int
*@args: Number to print
*Return: Number of digits printes
*/

int foo_d(va_list args)
{
	int i, div, len; /** length of printed*/
	unsigned int num;

	i = va_arg(args, int); /** Stored so won't change in new call*/
	div = 1;
	len = 0;
	if (i < 0) /** if negative,prt '-' & make positive*/
	{
		len += _putchar('-');
		num = i * -1;
	}
	else
	{
		num = i;
	}

	for (; num / div > 9;)
	{
		div = div * 10;
	}

	for (; div != 0;)
	{
		len += _putchar('0' + (num / div));/**prints a number*/
		num = num % div;/** removes number already printed*/
		div = div / 10; /** div to print next n*/
	}

	return (len);
}
