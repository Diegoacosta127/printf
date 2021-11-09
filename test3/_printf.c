#include "main.h"
/**
 * _printf - print anything
 * @format: arguments
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arguments;
	int ctr, i = 0;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);/** if no format, or % and next is end rtrn -1*/
	va_start(arguments, format);
	for (i = 0; format[i] != 0; i++)
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{/** if % && next is %, then print %*/
			i++, _putchar(format[i]), ctr++;
			continue;
		}
		else if (format[i] == '%' && format[i + 1] != '%')
		{
			switch (format[++i])
			{
				case 's': /** print a string*/
					ctr += foo_s(arguments);
					break;
				case 'c': /** print a single char*/
					ctr += foo_c(arguments);
					break;
				case '%': /** if +1 is also putchar, print %*/
					_putchar('%'), ctr++;
					break;
				case 'i':/** same case as d*/
					ctr += foo_d(arguments);
					break;
				case 'd':
					ctr += foo_d(arguments);
					break;
				default:
					_putchar('%'), _putchar(format[i]), ctr += 2;
			}
		}
		else/**if no %, just walk and print*/
			_putchar(format[i]), ctr++;
	}
va_end(arguments);
return (ctr);
}
