#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
* foo_c -Print a single char
* @args: char
* Return: characters printed
*/
int foo_c(va_list args)
{
	char ch = (char)va_arg(args, int);

	_putchar(ch);
	return (1);
}

/**
* foo_s -Print a string
* @args: String
* Return: number of chars printed
*/
int foo_s(va_list args)
{
	int i;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
