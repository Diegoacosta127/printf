#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
*function_i -Print an integrer base 10
*@a_int: arument list
*Return: 0
*/
int function_i(va_list a_int)
{
	int i;
	int j = 0;
	int k = 0;

	i = va_arg(a_int, int);

	if (i < j)
	{
		_putchar(i);
		k++;
	}
	return (k);
}
