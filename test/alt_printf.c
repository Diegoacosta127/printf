#include "main.h"
#include <stdarg.h>

/**
 * _printf - Prints what it is given
 * @format: String that holds what is going to print
 * Return: length of printed
 */
int _printf(const char *format, ...)
{
	unsigned int i, ctr = 0;

	va_list to_print; /** type for iterating args*/
	va_start(to_print, format); /** start iterating args */

	/** check if format not null & has specifier*/
	if (!format && (format[0] == '%' && format[1] == '\n'))
		return (-1);
	/** start to check if there are % and specifiers*/
	for (i = 0; format[i] != 0; i++)
	{/**print if no specifier is found*/
		if (format[i] != '%')
		{
			_putchar(format[i]);
			ctr++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')/**check if next is %*/
		{
			_putchar('%');
			/** i++;*/
			ctr++; /** need to update ctr to b printed*/
		}
		else if (format[i] == '%' && (format[i + 1] != '%')
		{/**call a foo that prints what we want using the va_arg(to_print,format)*/



		



			




}
