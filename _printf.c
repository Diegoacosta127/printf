#include "main.h"
/**
 * _printf - print whatever is given
 * @format: arguments
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arguments;
	int ctr = 0, i = 0;

	if (!format)
		return (-1);/** if no format, or % and next is end rtrn -1*/
	va_start(arguments, format);
	for (; format[i] != 0; i++)
	{
		if (format[i] == '%' && format[i + 1] == '%')
			i++, _putchar(format[i]), ctr++;/** if % && next is %, then print %*/
		else if (format[i] == '%' && format[i + 1] != '%')
		{
			switch (format[++i])/**first augment and then do*/
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
				case 'd':/** case decimal & int*/
					ctr += foo_d(arguments);
					break;
				case '\0': /** case end of st*/
					return (-1);
				default:
					_putchar('%'), _putchar(format[i]), ctr += 2;
			}
		}
		else /**if no %, just walk and print*/
		_putchar(format[i]), ctr++;
	}
va_end(arguments);
return (ctr);
}
