#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
*Fun_c -Print a single char
*@c: char
*Return: 0
*/
int Fun_c(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}

/**
*Fun_s -Print a string
*@s: String
*Return: 0
*/
int Fun_s(va_list s)
{
	int i;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
