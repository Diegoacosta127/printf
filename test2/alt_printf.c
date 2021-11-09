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

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (i = 0; format[i] != 0; i++)
	{/**print if no specifier is found*/
		if (format[i] != '%')
		{
			_putchar(format[i]), ctr++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')/**check if next is %*/
			i++, _putchar('%'), ctr++;
		else if (format[i] == '%' && format[i + 1] != 0)
		{
			switch (format[i + 1])
			{
				case 'c':
					ctr += function_c(va_arg(args_to_print, char *));
					break;
				case 's':
					ctr += function_s(va_arg(args_to_print, int));
					break;
				case 'i':
					ctr += function_i(va_arg(args_to_print, int));
					break;
				case 'd':
					ctr += function_d(va_arg(args_to_print, int));
					break;
				default:
					_putchar('%'), _putchar(format[i]);
			}
		}
	}
	va_end(args_to_print);
return (ctr);
}
