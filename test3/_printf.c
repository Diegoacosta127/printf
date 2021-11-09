#include "main.h"
/**
 * _printf - print anything
 * @format: arguments
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arguments;
	int num, i = 0;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(arguments, format);
	for (i = 0; format[i] != 0; i++)
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar(format[i]), num++;
			continue;
		}
		else if (format[i] == '%' && format[i + 1] != '%')
		{
			switch (format[++i])
			{
				case 's':
					num += foo_d(arguments);
					break;
				case 'c':
					num += foo_c(arguments);
					break;
				case '%':
					_putchar('%'), num++;
					break;
				case 'i':
				case 'd':
					num += foo_d(arguments);
					break;
				default:
					_putchar('%'), _putchar(format[i]), num += 2;
			}
		}
		else
			_putchar(format[i]), num++;
	}
va_end(arguments);
return (num);
}
