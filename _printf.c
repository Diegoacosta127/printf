#include "main.h"
#include <stdarg.h>
#define BUFFER_SIZE 1024
/**
  * _printf - produces output according to a format
  * @format: the output to be printed
  * Return: number of characters printed
  */
int _printf (const char *format, ...)
{
	int i, j;
	va_list list;
	
	li ap[] = 
	{
		{'c', function_c}, {'s', function_s}, {'%', function_por}
	};
	va_start(list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; j < 3; j++)
			{
				if (ap[j].c == format[i])
					ap[j].f(va_list);
			}
		}
		else
			_putchar(format[i]);
	}
	va_end(list);
	return (0);
}
