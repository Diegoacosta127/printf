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

	va_list args_to_print; /** type for iterating args*/

	va_start(args_to_print, format); /** start iterating args */

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
			ctr++; /** need to update ctr to b printed*/
		}
		else if (format[i] == '%' && format[i + 1] != 0)
		{
			/**
			 * Si el char que sigue, no es nulo, revisá que sea
			 * alguno de los formatos quenos dan e imprimí el
			 * dato en sí
			 */
			ctr = ctr + selector(format[i], args_to_print);
		}
		else if (format[i + 1] == 0)
			return (-1);
		}
	va_end(args_to_print);
return (ctr);
}
